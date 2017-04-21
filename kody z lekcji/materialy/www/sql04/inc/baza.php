<?php
class baza extends err{
	var $db=null;
	var $res=null;
	var $q=array(); //query table
	var $qins=''; //insert sth
	var $p=array(); //params of statment
	var $pins=array(); //params of insert statment
	var $r=array(); //tabela rowids
	var $ile=0; //liczniki kwerend udanych
	var $debug=null;
	
	function __construct($dbfile) {
		try {
			$this->db=new PDO("sqlite:dane/baza/db.testy");
			$this->db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
			$this->kadd("Connection OK!");
		} catch(PDOException $e) {
			$this->b_err($e->getMessage());
		}
		$this->b_mode(0);
	}

	function b_setq($op,$q,$sth=true) {
		switch ($op) {
			case 'sel':
				if (is_array($q)) {
					$qstr='SELECT '.$q['co'].' FROM '.$q['tbn'];
					if (isset($q['inner'])) $qstr.=' INNER JOIN '.$q['inner'];
					if (isset($q['war'])) $qstr.=' WHERE '.$q['war'];
					if (isset($q['lim'])) $qstr.=' LIMIT '.$q['lim'];
					if (isset($q['ord'])) $qstr.=' ORDER BY '.$q['ord']; 
				} else $qstr=$q;
			break;
			case 'ins':
				if (is_array($q) && isset($q['keys'])) {
					$qstr='INSERT INTO '.$q['tbn'];
					$qstr.=' ('.implode(',',$q['keys']).')';
					$qmark=array_fill(0,count($q['keys']),'?');
					$qstr.=' VALUES ('.implode(',',$qmark).')';
				}  else $qstr=$q;
				if ($sth) $this->qins=$this->db->prepare($qstr);
				else $this->qins=$qstr;
				if ($this->debug) $this->kadd($qstr);
				return true;
			break;
			case 'upd':
				if (is_array($q)) {
					$sstr=array();
					foreach ($q['keys'] as $key) $sstr[]=$key.' = ?';
					$qstr='UPDATE '.$q['tbn'].' SET '.implode(',',$sstr).' WHERE '.$q['war'].' = ?';
				} else $qstr=$q;
			break;
			case 'del':
				if (is_array($q)) {
					$qstr='DELETE FROM '.$q['tbn'].' WHERE '.$q['war'].' = ?';
				} else $qstr=$q;
			break;
			default:
				$qstr=$q;
		};
		if ($sth) $this->q[]=$this->db->prepare($qstr);
		else $this->q[]=$qstr;
		if ($this->debug) $this->kadd($qstr);
		$this->ile=count($this->q);
		return ($this->ile-1);
	}

	function b_update($tbn,$keys,$war,$tbv) {
		if (!is_array($keys)) $keys=array($keys);
		if (!is_array($tbv)) return $this->errmsg('Błąd danych.');
		$k=$this->b_setq('upd',array('tbn'=>$tbn,'keys'=>$keys,'war'=>$war));
		$this->p[$k]=$tbv;
		return $this->b_execute();
	}

	function b_query(&$ret=null) {
		$q=current($this->q);
		//echo $q.'<br />';
		try {
			$this->res=$this->db->query($q);
		} catch(PDOException $e) {
			$this->b_err($e->getMessage());
		}
		$ret=$this->res->fetchAll($this->mode);
		$this->b_err();
		$this->b_reset('q',true);
		if (empty($ret)) return false;
		return true;
	}

	function b_query_num($q=null,$mode=0) {
		if ($this->b_query($q,$mode) && $this->res->fetchColumn()) return true;
		return false;
	}

	function b_exec() {
		if ($this->ile<1) { $this->kadd('Brak danych do wykonania!'); return true; }
		$ret=0;
		foreach ($this->q as $qstr)
			try {
				//echo $qstr.'<br />';
				$ret=$this->db->exec($qstr);
			} catch(PDOException $e) {
				$this->b_err($e->getMessage());
			}	
		$this->b_reset('q',true);
		$this->b_err();
		return $ret;
	}

	function b_execute(&$ret=null) {
		if ($this->ile<1) { $this->kadd('Brak danych do usunięcia/zaktualizowania!'); return true; }
		if ($this->ile>1) $this->db->beginTransaction();
		foreach ($this->q as $k => $sth) {
				//var_dump($sth);echo '<br />';
				//var_dump($this->p[$k]);echo '<br />';
			foreach ($this->p[$k] as $params) {
				try {
					foreach ($params as $n => $p) {
						$sth->bindParam(($n+1),$params[$n]);
					}
					$sth->execute();
				} catch(PDOException $e) {
					$this->b_err($e->getMessage());
				}
			}
		}
		if ($this->ile>1) $this->db->commit();
		$this->b_reset(null,true);
		if (is_array($ret)) $ret=$sth->fetchAll($this->mode);
		$this->kadd('Zaktualizowano/usunięto ['.$sth->rowCount().']');
		return $sth->rowCount();
	}

	function b_exec_ins() {
		if (empty($this->qins)) { $this->kadd('Brak danych do zapisania.'); return true; }
		$ret=0;
		if (is_string($this->qins)) $this->qins=$this->db->prepare($this->qins);
		foreach ($this->pins as $k => $params) {
			//print_r($params); return;
			try {
				foreach ($params as $n => $p)
					$this->qins->bindParam(($n+1),$params[$n]);
				$this->qins->execute();
			} catch(PDOException $e) {
				$this->b_err($e->getMessage());
			}
			$this->r[$k]=$this->db->lastInsertId();
			$ret+=$this->qins->rowCount();
		}
		if ($ret) $this->kadd('Zapisano ['.$ret.'].');
		$this->b_reset('qins');
		return $ret;
	}

	function b_exec_all() {
		if ($this->b_exec_ins() && $this->b_execute()) return true;
		return false;
	}
	
//do tabeli parametrów zapisz tablicę wartości dla zapytania o indeksie k
//$tbn - nazwa tablicy
//$co - pola do pobrania
//$keys - pola do warunku
//$tbv - wartości do warunku
//$lim - limit
//$nmp - nazwa pole, które należy zwrócić
	function b_isval($tbn,$co,$keys,$tbv,$lim=true) {
		$keys=mktb($keys); $tbv=mktb($tbv);
		$this->b_vprep($tbv,true);
		$war='';
		foreach ($keys as $k => $v) $tbv[$k]=$v.'='.$tbv[$k];
		$war=implode(' AND ', $tbv);
		$lim ? $war.=' LIMIT 1' :  '';
		$q='SELECT '.$co.' FROM '.$tbn.' WHERE '.$war;
		//echo $q;
		if ($this->debug) $this->kadd($q);
		try {
			$this->res=$this->db->query($q,$this->mode);
		} catch(PDOException $e) {
			$this->b_err($e->getMessage());
		}
		$ret=$this->res->fetchAll($this->mode);
		if (empty($ret)) return false;
		if ($co==='OID') return $ret[0]['rowid'];
		if ($lim && (strpos($co,',') === false)) return $ret[0][$co];
		return $ret;
	}
//--- fix keys tabela.pole na pole
	function fixKeys($tb) {//zamienia klucze tabela.pole na pole
		if (!is_array($tb)) return $tb;
		foreach ($tb as $k => $v) {
			unset($tb[$k]);
			if (is_array($v)) $tb[$k]=$this->fixKeys($v);
			else {
				if (strpos($k,'.')) $k=substr($k,strpos($k,'.')+1);
				$tb[$k]=$v;
			}
		}
		return $tb;
	}
//--- funkcja formatująca wyrażenia set lub where
	function b_vprep(&$tbv) {
		foreach ($tbv as $k => $v) {
			if ($v==='NULL') $tbv[$k]=NULL;
			else if (!is_numeric($v)) $tbv[$k]='\''.$v.'\'';
		}
	}

	function b_err($errstr=null) {
		if (is_null($errstr)) {
			foreach ($this->db->errorInfo() as $e)
				if ($e!='00000') $this->eadd($e);
		} else $this->eadd($errstr);
	}

	function b_type($n=0) {
		return $n ? 'PDO::PARAM_STR' : 'PDO::PARAM_INT';
	}

	function b_mode($mode=0) {
		if ($mode<0 || $mode>12) $mode=0; 
		$fetch_style=array(
			PDO::FETCH_ASSOC,
			PDO::FETCH_BOTH,
			PDO::FETCH_BOUND,
			PDO::FETCH_CLASS,
			PDO::FETCH_INTO,
			PDO::FETCH_LAZY,
			PDO::FETCH_NUM,
			PDO::FETCH_OBJ,
			PDO::FETCH_COLUMN,
			PDO::FETCH_UNIQUE,
			PDO::FETCH_GROUP,
			PDO::FETCH_FUNC,
			PDO::FETCH_KEY_PAIR
			);
		$this->mode=$fetch_style[$mode];
	}

//--- funkcja czyści tablice i ew. licznik poprawnych zapytań
	function b_reset($co='',$ile=false) {
		if ($co == 'q') $this->q=$this->p=array();
		else if ($co == 'qins') { $this->qins=''; $this->pins=array(); }
		else { $this->q=$this->p=$this->pins=array(); $this->qins=''; }
		if ($ile) $this->ile=0;
	}
	
	function druk_q($q) {
		if (!is_array($q)) $q=array($q);
		foreach ($q as $v) $this->kadd($v);
	}

}
?>