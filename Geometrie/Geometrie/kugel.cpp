#include "stdafx.h"
#include <iostream>
#include "KaiMath.h"

Kugel::Kugel(double number, Angaben type)
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
	else if (type == Angaben::Oberflaeche) { //Wenn die Oberf�che angegeben wurde
		o = number;
		RadiusMitOberflaeche();
		VolumenBerechnen();
		d = r * 2;
	}
}

Kugel::~Kugel()
{
}

//Getter f�r r
double Kugel::getR()
{
	return r;
}

//Getter f�r o
double Kugel::getO()
{
	return o;
}

//Getter f�r d
double Kugel::getD()
{
	return d;
}

//Getter f�r v
double Kugel::getV()
{
	return v;
}

//Berechnet die Oberf�che mit dem Radius
void Kugel::OberflaecheBerechnen()
{
	//Oberfl�che wird mit O = (3/4) * PI * r^2 berechnet
	o = 4 * M_PI * pow(r, 2);
}

//Berechnet das Volumen mit dem Radius
void Kugel::VolumenBerechnen()
{
	//Volumen wird mit V = (4/3) * PI * r^3 berechnet
	v = bruchwertBerechnen(4, 3) * M_PI * pow(r, 3);
}

//Berechnet den Radius mit des Volumens
void Kugel::RadiusMitVolumen()
{
	//Radius wird berechnet mit cbrt(V / 4 * 3 / PI)
	//cbrt = Dritte Wurzel
	r = cbrt(v / 4 * 3 / M_PI);
}

//Berechnet den Radius mit der Oberfl�che
void Kugel::RadiusMitOberflaeche()
{
	//Radius wird berechnet mit sqrt(o / 4 * PI)
	//sqrt = Quadratwurzel
	r = sqrt(bruchwertBerechnen(o, 4 * M_PI));
}