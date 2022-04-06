#include "Artikal.h"
#include <string.h>
#pragma once


#ifndef _PRODAVAC_H_
#define _PRODAVAC_H_
struct katalog {
	Artikal ar;
	double marza;
	int brDanaNabavke;
	katalog* next;
};
class Prodavac {
	string naziv="";
	
	katalog* detalji[100];
	int counter = 0;
public:
	Prodavac(string n);
	double IzracunajProdajnuCenu(Artikal a);
	void dodajUkatalog(Artikal a, double m, int brdan);
	const string& DohvatiNazivProdavca()const { return naziv; }
	katalog* DohvatiKatalog() { return *detalji; }
	/*~Prodavac() {
		delete[] detalji;
	}*/
};
#endif//!_PRODAVAC_H_