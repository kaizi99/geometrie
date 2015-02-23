// Geometrie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Kugel.h"
#include <iostream>
#include "Pyramide.h"

int main(int argc, char* argv[])
{
	//Eine neue Kugel erstellen
	Kugel* k = new Kugel(5, Angaben::Radius);
	std::cout << "Neue Kugel wird erstellt: Radius = 5";

	
	Pyramide* p = new Pyramide(7, PyramideAngaben::a, 9, PyramideAngaben::hoeheSeite);
	std::cout << "Neue Pyramide wird erstellt: a=7, hs=9" << std::endl;

	//Wir holen uns die Berechneten Werte aus dem Pointer
	double V = k->getV();
	double O = k->getO();
	double R = k->getR();

	//Der Durchmesser wird berechnet
	double D = k->getD();

	//Eigenschaften der Kugel ausgeben
	std::cout << "Kugel: " << std::endl;
	std::cout << "Volumen: " << V << std::endl;
	std::cout << "Oberfläche: " << O << std::endl;
	std::cout << "Radius: " << R << std::endl;
	std::cout << "Durchmesser: " << D << std::endl;

	std::cout << std::endl;
	
	std::cout << "Pyramide: " << std::endl;
	std::cout << "Volumen: " << p->getV() << std::endl;
	std::cout << "Mantel: " << p->getM() << std::endl;
	std::cout << "Oberfläche: " << p->getO() << std::endl;
	std::cout << "Höhe: " << p->getH() << std::endl;
	std::cout << "Seite: " << p->getS() << std::endl;

	//

	//Pointer und das Objekt löschen
	delete k;
	delete p;
	std::cin.get();

	return 0;
}

