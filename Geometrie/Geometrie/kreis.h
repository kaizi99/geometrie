#pragma once
#define _USE_MATH_DEFINES
#include <cmath>

enum Angaben{
	Durchmesser,
	Radius,
	Volumen,
	Oberflaeche
};

class Kreis
{
public:
	Kreis(double number, Angaben type);
	~Kreis();
	double getR();
	double getD();
	double getV();
	double getO();

	void OberflaecheBerechnen();
	void VolumenBerechnen();

	void RadiusMitVolumen();
	void RadiusMitOberflaeche();
private:
	double r;
	double d;
	double v;
	double o;
};

