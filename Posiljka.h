#pragma once
#include"Artikal.h"
#include"Rukovalac.h"
#include"Prodavac.h"
#include<vector>
#ifndef _POSILJKA_H_
#define _POSILJKA_H_
struct detaljiPosiljke
{
	int BrDanaCekanjaDostave = 0;
	double CenaPosiljke = 0;
};

class Posiljka {
	Artikal art;
	int id;
	vector<Prodavac> lista;
	detaljiPosiljke* dt;
	int prov = 0;
public:
	Posiljka(Artikal& a);
	const Artikal& DohvatiArtikal() const { return art; }
	const int& DohvatiIndentifikator()const { return id; }
    detaljiPosiljke* DohvatiDetaljePosiljke();
	friend Posiljka& operator+=(Posiljka& p, Prodavac& x);
	void IzracunajDetaljePoruke(Posiljka& p);
	friend ostream& operator<<(ostream& it, Posiljka& p);
	~Posiljka() { 
		
		delete[] dt;
		lista.clear();
		
		 }
};

#endif //!_POSILJKA_H_