<?php if(!defined('IN_SQL')){ die('You cannot load this page directly.'); } ?>
<!DOCTYPE html>
<html lang="pl">
<head>
	<meta charset="utf-8" />
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
	<link href="style.css" rel="stylesheet" />
<title>Podstawy PHP i SQL</title>
</head>
<body>
	<header>
		<div class="wrapper">
			<div id="logo"><img src="imgs/sqlite.png" width="200" height="80" /></div>
			<nav><a href="." >Start</a> &middot; </nav>
		</div>
	</header>
	
	<div class="wrapper clearfix">
		<article>
			<section>
				<noscript><p>!!! Twoja przeglądarka nie obsługuje języka JavaScript! Aby korzystać z wszystkich możliwości serwisu, uaktywnij obsługę JavaScript.</p></noscript>
				<h1><?php get_page_title($id); ?></h1>
				<?php
					get_page_content($id);
					get_koms();
				?>
				
			</section>
		</article>
		<aside>
			<h2>Menu</h2>
			<ul>
				<?php get_menu($id); ?>
			</ul>
		</aside>
		<footer class="clearfix">
			<div class="fr"><img src="imgs/html5-logo.png" width="100" /></div>
		</footer>
	</div>
</body>
</html>