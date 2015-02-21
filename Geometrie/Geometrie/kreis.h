#pragma once
#define _USE_MATH_DEFINES
#include <cmath>

//Mit dem Enum gibt man an, was die Nummer f�r ein Typ ist
enum class Angaben{
	Durchmesser,
	Radius,
	Volumen,
	Oberflaeche
};

class Kreis
{
public:
	//Konstruktor
	Kreis(double number, Angaben type);

	//Destruktor
	~Kreis();

	//Getter-Funktionen
	double getR();
	double getD();
	double getV();
	double getO();

	//Berechnet die Oberf�che mit dem Radius
	void OberflaecheBerechnen();

	//Berechnet das Volumen mit dem Radius
	void VolumenBerechnen();

	//Berechnet den Radius mit dem Volumen
	void RadiusMitVolumen();

	//Berechnet den Radius mit der Oberfl�che
	void RadiusMitOberflaeche();
private:
	//Radius
	double r;

	//Durchmesser
	double d;

	//Volumen
	double v;

	//Oberfl�che
	double o;
};

