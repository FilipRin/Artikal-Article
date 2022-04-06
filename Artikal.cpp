#include"Artikal.h"
Artikal::Artikal()
{
}
Artikal::Artikal(string n, int b, double nc)
{
	naziv = naziv + n;
	barkod = b;
	nabavnaCena = nc;
}

bool Artikal::operator==(Artikal& a1)
{
	if (barkod == a1.barkod) {
		cout << "Artikli su jednaki!" << endl;
		return true;
	}
	cout << "Artikli nisu jednaki!" << endl;
	return false;
}
