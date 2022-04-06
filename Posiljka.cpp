#include"Posiljka.h"
int i=0;
Posiljka& operator+=(Posiljka& p, Prodavac& x)
{
	if (p.prov == 0) {
		p.lista.push_back(x);
		return p;
	}
	else {
		cout << "Greska!" << endl;
	}
	// TODO: insert return statement here
	return p;
}
ostream& operator<<(ostream& it, Posiljka& p)
{
	cout << "Posiljka[" << p.id << "," << p.art.DohvatiNaziv() << "]" << endl;
	// TODO: insert return statement here
	return it;
}

Posiljka::Posiljka( Artikal& a)
{
	art = a;
	id = i;
	i++;
	lista.clear();
	dt = new detaljiPosiljke;
	dt->BrDanaCekanjaDostave = 0;
	dt->CenaPosiljke = 0;
}

detaljiPosiljke* Posiljka::DohvatiDetaljePosiljke() 
{
	if (prov == 1)
	{
		return dt;
	}
	else {
		cout << "Greska" << endl;
		dt->BrDanaCekanjaDostave = 0;
		dt->CenaPosiljke = 0;
	}
	return dt;
	// TODO: insert return statement here
}

void Posiljka::IzracunajDetaljePoruke(Posiljka& p)
{
	p.prov = 1;
	for (int j = 0; j < p.lista.size(); j++) {
		p.dt->BrDanaCekanjaDostave = p.dt->BrDanaCekanjaDostave + p.lista[j].DohvatiKatalog()->brDanaNabavke;
		p.dt->CenaPosiljke = p.dt->CenaPosiljke + p.lista[j].IzracunajProdajnuCenu(p.art);
	}
}
