#include"Prodavac.h"
Prodavac::Prodavac(string n)
{
	naziv = naziv + n;
	detalji[counter] = new katalog;
	detalji[counter]->brDanaNabavke = 0;
	detalji[counter]->marza = 0;
	detalji[counter]->next = nullptr;
	counter++;
}

double Prodavac::IzracunajProdajnuCenu(Artikal a)
{
	katalog* i = nullptr;
	katalog* curr = *detalji;
	for (i = curr; i != nullptr; i = i->next) {
		if (i->ar == a) {
			break;
		}

	}
	double suma = 0;
	suma = suma + i->ar.DohvatiNabavnuCenu() * i->marza;
	return suma;
}

void Prodavac::dodajUkatalog(Artikal a, double m, int brdan)
{
	katalog* head = *detalji;
	katalog* novi = new katalog;
	if (head->next == nullptr) {
		head->ar = a;
		head->brDanaNabavke = brdan;
		head->marza = m;
		head->next = nullptr;
		delete novi;
	}
	else {
		while (head->next != nullptr) {
			head = head->next;
		}
		novi->ar = a;
		novi->brDanaNabavke = brdan;
		novi->marza = m;
		novi->next = nullptr;
		head->next = novi;
	}
	
}
