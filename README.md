# Artikal-Article

---------------------------------------
• *Lista* sadrži proizvoljan broj podataka nekog tipa i stvara se prazna. Moguće je dodati
podatak na kraj liste (lista+=podatak). Moguće je dohvatiti broj podataka u listi. Moguće
je dohvatiti podatak sa zadate celobrojne pozicije u listi (lista[i]). Greška je ukoliko
podatak na zadatoj poziciji ne postoji.

---------------------------------------
• *Artikal* ima naziv, celobrojni barkod, realnu nabavnu cenu. Svi podaci se zadaju prilikom
stvaranja i mogu da se dohvate. Moguće je uporediti dva artikla na jednakost (art1==art2).
Artikli su jednaki ukoliko su im barkodovi jednaki.

---------------------------------------
• *Rukovalac* obrađuje zadatu pošiljku menjajući njene atribute na odgovarajući način.

---------------------------------------
• *Pošiljka* se stvara sa zadatim artiklom, a sadrži i jedinstveni automatski generisani
celobrojni identifikator, listu rukovalaca i agregirane detalje pošiljke. Detalji pošiljke
sadrže celobrojan broj dana čekanja na dostavu pošiljke i realnu cenu pošiljke. Početne
vrednosti detalja pošiljke su nula. Atribute pošiljke mogu postavljati isključivo
rukovaoci. Lista rukovalaca je inicijalno prazna, a rukovaoca je naknadno moguće dodati
(posiljka+=rukovalac). Moguće je izračunati detalje pošiljke tako što pošiljku redom
obrađuju svi rukovaoci iz liste rukovalaca u redosledu njihovog dodavanja. Moguće je
dohvatiti artikal, identifikator i detalje pošiljke. Greška je ukoliko se pokuša dohvatanje
detalja pošiljke pre njihovog izračunavanja. Greška je ukoliko se pokuša dodavanje novog
rukovaoca nakon izračunavanja detalja pošiljke. Pošiljka se u izlazni tok ispisuje
(it<<posiljka) u obliku Posiljka[identifikator, naziv_artikla].

---------------------------------------
• *Prodavac* je rukovalac pošiljkom koji se stvara sa zadatim nazivom, a sadrži i katalog ponude
koji predstavlja listu trojki (artikal, realna marža i celobrojni broj dana potreban za
nabavku datog artikla). Prodajna cena artikla izračunava se množenjem njegove nabavne cene i
marže. Katalog je inicijalno prazan a moguće ga je naknadno proširiti zadavanjem
odgovarajuće trojke. Moguće je dohvatiti naziv prodavca. Prodavac obrađuje pošiljku tako što
(1) na broj dana čekanja na dostavu pošiljke doda broj dana koji je njemu potreban za nabavku
datog artikla i (2) na cenu pošiljke doda prodajnu cenu artikla.

---------------------------------------
Napisati glavnu funkciju koja napravi artikal i prodavca, proširi katalog prodavca datim
artiklom, napravi pošiljku, doda prodavca u njene rukovaoce i ispiše detalje pošiljke.
