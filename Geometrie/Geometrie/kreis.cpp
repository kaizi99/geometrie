#include "stdafx.h"
#include <iostream>

//Berechnet den Wert eines Bruches
double BruchwertBerechnen(double zaehler, double nenner);

Kreis::Kreis(double number, Angaben type)
{
	if (type == Angaben::Durchmesser) { //Wenn der Durchmesser angegeben wurde
		r = number / 2;
		d = number;
		OberflaecheBerechnen();
		VolumenBerechnen();
	}
	else if (type == Angaben::Radius) { //Wenn der Radius angegeben wurde
		r = number;
		d = number * 2;
		OberflaecheBerechnen();
		VolumenBerechnen();
	}
	else if (type == Angaben::Volumen) { //Wenn das Volumen angegeben wurde
		v = number;
		RadiusMitVolumen();
		OberflaecheBerechnen();
		d = r * 2;
	}
	else if (type == Angaben::Oberflaeche) { //Wenn die Oberfäche angegeben wurde
		o = number;
		RadiusMitOberflaeche();
		VolumenBerechnen();
		d = r * 2;
	}
}

Kreis::~Kreis()
{
}

//Getter für r
double Kreis::getR() 
{
	return r;
}

//Getter für o
double Kreis::getO() 
{
	return o;
}

//Getter für d
double Kreis::getD() 
{
	return d;
}

//Getter für v
double Kreis::getV()
{
	return v;
}

//Berechnet die Oberfäche mit dem Radius
void Kreis::OberflaecheBerechnen()
{
	//Oberfläche wird mit O = (3/4) * PI * r^2 berechnet
	o = 4 * M_PI * pow(r, 2);
}

//Berechnet das Volumen mit dem Radius
void Kreis::VolumenBerechnen()
{
	//Volumen wird mit V = (4/3) * PI * r^3 berechnet
	v = BruchwertBerechnen(4, 3) * M_PI * pow(r, 3);
}

//Berechnet den Radius mit des Volumens
void Kreis::RadiusMitVolumen()
{
	//Radius wird berechnet mit cbrt(V / 4 * 3 / PI)
	//cbrt = Dritte Wurzel
	r = cbrt(v / 4 * 3 / M_PI);
}

//Berechnet den Radius mit der Oberfläche
void Kreis::RadiusMitOberflaeche()
{
	//Radius wird berechnet mit sqrt(o / 4 * PI)
	//sqrt = Quadratwurzel
	r = sqrt(BruchwertBerechnen(o, 4 * M_PI));
}

//Berechnet den Wert eines Bruches
double BruchwertBerechnen(double zaehler, double nenner)
{
	return zaehler / nenner;
} 