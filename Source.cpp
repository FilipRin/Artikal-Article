#include"Posiljka.h"
#include<iostream>

using namespace std;

int main() {
	
	Artikal art1("krem", 1111, 250);
	Prodavac P1("Petar");
	P1.dodajUkatalog(art1,10,25);
	Posiljka Pos(art1);
	//Posiljka& pom = Pos;
	Pos += P1;
	detaljiPosiljke* pom=nullptr;
	Pos.IzracunajDetaljePoruke(Pos);
	pom=Pos.DohvatiDetaljePosiljke();
	//x1,x2=;
	cout << "Br Dana posiljke: "<<pom->BrDanaCekanjaDostave<<", Cena: " <<pom->CenaPosiljke<< endl;
	
	return 0;
}