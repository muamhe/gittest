<?php
setlocale(LC_ALL,"pl_PL.UTF-8");
date_default_timezone_set('Europe/Warsaw');
error_reporting(E_ALL);
ini_set('display_errors', 1);
ini_set('log_errors', 1);
ini_set('error_log','errorlog.txt');
// definicje stałych
define('IN_SQL',true); // stała wykorzystywana do zabezpieczeń
define('DINC','inc/'); // ścieżka do katalogu z dodatkowymi plikami
if (isset($_GET['id'])) $id=trim($_GET['id']); else $id='witam';
require_once(DINC.'functions.php');
include_once(DINC.'template.php');
?>
