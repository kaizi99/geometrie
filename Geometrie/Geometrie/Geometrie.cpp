// Geometrie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Kugel.h"
#include <iostream>

int main(int argc, char* argv[])
{
	//Eine neue Kugel erstellen
	Kugel* k = new Kugel(5, Angaben::Radius);

	//Wir holen uns die Berechneten Werte aus dem Pointer
	double V = k->getV();
	double O = k->getO();
	double R = k->getR();

	//Der Durchmesser wird berechnet
	double D = k->getD();

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

