// Geometrie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "kreis.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//Einen neuen Kreis erstellen
	Kreis* k = new Kreis(523.688, Volumen);

	//Wir holen uns die Berechneten werte aus dem Pointer
	double V = k->getV();
	double O = k->getO();
	double R = k->getR();

	//Der Durchmesser wird berechnet
	double D = R * 2;

	//Eigenschaften des Kreises ausgeben
	std::cout << "Volumen: " << V << std::endl;
	std::cout << "Oberfläche: " << O << std::endl;
	std::cout << "Radius: " << R << std::endl;
	std::cout << "Durchmesser: " << D << std::endl;

	//Pointer und das Objekt löschen
	delete k;
	std::cin.get();

	return 0;
}

