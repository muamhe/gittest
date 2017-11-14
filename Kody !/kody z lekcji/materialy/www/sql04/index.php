<?php
setlocale(LC_ALL,"pl_PL.UTF-8");
date_default_timezone_set('Europe/Warsaw');
error_reporting(E_ALL);
ini_set('display_errors', 1);
ini_set('log_errors', 1);
ini_set('error_log','errorlog.txt');
define('IN_SQL',true);
define('DINC','inc/');
define('DBASE', 'baza/');
define('DBNAME','db.testy');
require_once(DINC.'functions.php');
require_once(DINC.'db.php');
$db=null;
$mode=PDO::FETCH_ASSOC;
$kom=array();
$dbfile=DBASE.DBNAME;
if (isset($_GET['id'])) $id=trim($_GET['id']); else $id='witam';
init_baza($dbfile);
include_once(DINC.'template.php');
?>

