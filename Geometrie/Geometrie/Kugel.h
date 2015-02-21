#pragma once
#define _USE_MATH_DEFINES
#include <cmath>

//Mit dem Enum gibt man an, was die Nummer für ein Typ ist
enum class Angaben{
	Durchmesser,
	Radius,
	Volumen,
	Oberflaeche
};

class Kugel
{
public:
	//Konstruktor
	Kugel(double number, Angaben type);

	//Destruktor
	~Kugel();

	//Getter-Funktionen
	double getR();
	double getD();
	double getV();
	double getO();

	//Berechnet die Oberfäche mit dem Radius
	void OberflaecheBerechnen();

	//Berechnet das Volumen mit dem Radius
	void VolumenBerechnen();

	//Berechnet den Radius mit dem Volumen
	void RadiusMitVolumen();

	//Berechnet den Radius mit der Oberfläche
	void RadiusMitOberflaeche();
private:
	//Radius
	double r;

	//Durchmesser
	double d;

	//Volumen
	double v;

	//Oberfläche
	double o;
};

