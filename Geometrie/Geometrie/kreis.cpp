#include "stdafx.h"
#define WURZELMITN(n,x) pow(x, 1.0/n)

double BruchwertBerechnen(double zaehler, double nenner);

Kreis::Kreis(double number, Angaben type)
{
	if (type == Durchmesser) {
		r = number / 2;
		OberflaecheBerechnen();
		VolumenBerechnen();
	}
	else if (type == Radius) {
		r = number;
		OberflaecheBerechnen();
		VolumenBerechnen();
	}
	else if (type == Volumen) {
		v = number;
		RadiusMitVolumen();
		OberflaecheBerechnen();
	}
	else if (type == Oberflaeche) {
		o = number;
		RadiusMitOberflaeche();
		VolumenBerechnen();
	}
}

Kreis::~Kreis()
{

}

double Kreis::getR() 
{
	return r;
}

double Kreis::getO() 
{
	return o;
}

double Kreis::getD() 
{
	return d;
}

double Kreis::getV()
{
	return v;
}

void Kreis::OberflaecheBerechnen()
{
	//Oberfläche wird mit O = (3/4) * PI * r^2 berechnet
	o = 4 * M_PI * pow(r, 2);
}

void Kreis::VolumenBerechnen()
{
	//Volumen wird mit V = (4/3) * PI * r^3 berechnet
	v = BruchwertBerechnen(4, 3) * M_PI * pow(r, 3);
}

void Kreis::RadiusMitVolumen()
{
	r = WURZELMITN(BruchwertBerechnen(3 / v, (4 * M_PI)), 3);
}

void Kreis::RadiusMitOberflaeche()
{
	r = sqrt(BruchwertBerechnen(o, 4 * M_PI));
}

double BruchwertBerechnen(double zaehler, double nenner)
{
	return zaehler / nenner;
}