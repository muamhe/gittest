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

function get_menu() {
	global $pages;
	foreach ($pages as $p => $tyt) {
		echo '<li><a href="?id='.$p.'">'.$tyt.'</a></li>';
	}
}
?>
