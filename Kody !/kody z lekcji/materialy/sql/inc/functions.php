<?php
$pages = array(
	'witam'=>'Witamy w serwisie',
	'tablice'=>'Tworzenie tabel',
	'baza'=>'Operacje na bazie',
	'sqlcmd'=>'Polecenia SQL'
	);

function get_page_title($id) {
	global $pages;
	if (array_key_exists($id, $pages)) echo $pages[$id];
	else echo '';
}

function get_page_content($id) {
	global $db,$pages,$kom;
	if (file_exists($id.'.html')) include($id.'.html');
	else $kom[]='Brak takiej strony ['.$id.']!';
}

function get_koms() {
	global $kom;
	foreach ($kom as $k) echo '<p>'.$k.'</p>';
}

function get_menu($id) {
	global $pages;
	foreach ($pages as $p => $tyt) {
		echo '<li><a href="?id='.$p.'">'.$tyt.'</a></li>';
	}
}


function init_baza($dbfile) {
	global $db,$kom;
	try {
		if (!file_exists($dbfile)) $kom[]='Próba utworzenia nowej bazy...';
		$db=new PDO("sqlite:$dbfile");
		$db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
	} catch(PDOException $e) {
		echo ($e->getMessage());
	}
}

function db_exec($qstr) {
	global $db,$kom;
	$kom[]='Wykonuję: '.$qstr.'<br />';
	try {
		$ret=$db->exec($qstr);
	} catch(PDOException $e) {
		echo ($e->getMessage());
	}
	return $ret;
}

function get_err() {
	global $db,$kom;
	foreach ($db->errorInfo() as $e)
		if ($e!='00000') $kom[]=$e;
}

function db_query($qstr,&$ret=null) {
	global $db,$mode,$mode;
	$kom[]='Wykonuję: '.$qstr.'<br />';
	$res=null;
	try {
		$res=$db->query($qstr);
	} catch(PDOException $e) {
		echo ($e->getMessage());
	}
	if ($res) $ret=$res->fetchAll($mode);
	if (empty($ret)) return false;
	return true;
	}

/*
$qstr="BEGIN;
	CREATE TABLE users (
		uid INTEGER PRIMARY KEY NOT NULL,
		login CHAR(20) UNIQUE NOT NULL,
		haslo CHAR(50) NOT NULL,
		email CHAR(40) UNIQUE NOT NULL,
		nazwisko CHAR(40) NOT NULL);
	INSERT INTO users VALUES (NULL,'admin','".sha1('haslo')."','admin@home.net','Adam Badam');
	COMMIT;";
*/
?>
