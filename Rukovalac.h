#pragma once
#ifndef _RUKOVALAC_H_
#define _RUKOVALAC_H_
class Rukovalac {
	int brDana;
	double izmenaCene;
public:
	Rukovalac(int br, double cen);
	const int& DohvatiBrDana()const { return brDana; }
	const double& DohvatiIzmeneCena()const { return izmenaCene; }
};
#endif//!_RUKOVALAC_H_