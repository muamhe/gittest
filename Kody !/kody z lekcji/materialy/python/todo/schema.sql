-- tabela z zadaniami
	drop table if exists zadania;
	create table zadania (
		id integer primary key autoincrement, -- unikalny identyfikator
		tytul text not null, -- opis zadania do wykonania
		isdone boolean not null, -- czy zadanie zostało wykonane
		datad datetime not null -- data dodania zadania
	);

-- przykładowe dane
INSERT INTO zadania (id, tytul, isdone, datad)
VALUES (null, 'Wyrzucić śmieci', 0, datetime(current_timestamp));
INSERT INTO zadania (id, tytul, isdone, datad)
VALUES (null, 'Nakarmić psa', 0, datetime(current_timestamp));
INSERT INTO zadania (id, tytul, isdone, datad)
VALUES (null, 'Odrobić lekcje', 0, datetime(current_timestamp));
