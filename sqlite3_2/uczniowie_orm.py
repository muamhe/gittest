# -*- coding: utf-8 -*-

from peewee import *

baza_plik = "szkola.db"
baza = SqliteDatabase(baza_plik)  # ':memory:'


class BazaModel(Model):  # klasa bazowa
    class Meta:
        database = baza


class Klasa(BazaModel):
    id = CharField(primary_key=True)
    klasa = CharField(null=False)
    rok_naboru = IntegerField(null=False)
    rok_matury = IntegerField(null=False)

class Uczen(BazaModel):
    id = IntegerField(primary_key=True)
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    plec = IntegerField(null=False)
    klasa_id = ForeignKeyField(Klasa, related_name='IDKlasy')
    egz_hum = DecimalField(decimal_places=2, default = 0)
    egz_mat = DecimalField(decimal_places=2, default = 0)
    egz_jez = DecimalField(decimal_places=2, default = 0)



class Przedmiot(BazaModel):
    id = CharField(primary_key=True)
    przedmiot = CharField(null=False)
    nazwisko_naucz = CharField(null=False)
    imie_naucz = CharField(null=False)
    plec_naucz = IntegerField(null=False)
   
    
class Ocena(BazaModel):
    id = CharField(primary_key=True)
    datad = DateField(null=False)
    uczen_id = ForeignKeyField(Uczen, related_name='IDUcznia')
    przedmiot_id = ForeignKeyField(Przedmiot, related_name='IDPrzedmiotu')
    ocena = DecimalField(null=False)


baza.connect()  # nawiązujemy połączenie z bazą
baza.create_tables([Klasa, Uczen, Przedmiot, Ocena], True)  # tworzymy tabele






#def kwerenda_c():
 #   query = (Dzial
  #          .select(Dzial.siedziba, fn.Sum(Pracownik.placa).alias('place'))
   #         .join(Pracownik)
    #        .group_by(Dzial.siedziba)
     #       .order_by('place').asc()
      #      )
#
 #   for obj in query:
  #      print(obj.siedziba, obj.place)



#kwerenda_i()
