#include<iostream>
#include<string.h>

using namespace std;
#pragma once
#ifndef _ARTIKAL_H_
#define _ARTIKAL_H_

class Artikal {

	string naziv="";
	int barkod;
	double nabavnaCena;
public:
	Artikal();
	Artikal(string n, int b, double nc);
	const string& DohvatiNaziv() const { return naziv; }
	const int& DohvatiBarkod()const { return barkod; }
	const double& DohvatiNabavnuCenu()const { return nabavnaCena; }
	
	bool operator==(Artikal& a1);
};

#endif // !_ARTIKAL_H_
