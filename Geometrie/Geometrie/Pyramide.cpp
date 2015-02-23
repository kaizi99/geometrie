#include "Pyramide.h"
#include "KaiMath.h"

Pyramide::Pyramide(double num1, PyramideAngaben typ1, double num2, PyramideAngaben typ2)
{
	//Angaben die gemacht werden können
	//a, hoehe, hoeheSeite, s

	if (typ1 == PyramideAngaben::a)
	{
		a = num1;
		if (typ2 == PyramideAngaben::hoehe) {
			h = num2;
			hs = pythagoras(bruchwertBerechnen(a, 2), h, PythagorasAction::plus);
			s = pythagoras(bruchwertBerechnen(a, 2) * sqrt(2), h, PythagorasAction::plus);
			M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
		if (typ2 == PyramideAngaben::hoeheSeite) {
			hs = num2;
			h = pythagoras(hs, bruchwertBerechnen(a, 2), PythagorasAction::minus);
			s = pythagoras(bruchwertBerechnen(a, 2) * sqrt(2), h, PythagorasAction::plus);
			M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
		if (typ2 == PyramideAngaben::s) {
			s = num2;
			hs = pythagoras(s, bruchwertBerechnen(a, 2), PythagorasAction::minus);
			h = pythagoras(hs, bruchwertBerechnen(a, 2), PythagorasAction::minus);
			M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
	}
	if (typ1 == PyramideAngaben::hoehe)
	{
		h = num1;
		if (typ2 == PyramideAngaben::a) {
			a = num2;
			hs = pythagoras(bruchwertBerechnen(a, 2), h, PythagorasAction::plus);
			s = pythagoras(bruchwertBerechnen(a, 2) * sqrt(2), h, PythagorasAction::plus);
			M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
		if (typ2 == PyramideAngaben::hoeheSeite) {
			hs = num2;
			a = pythagoras(hs, h, PythagorasAction::minus) * 2;
			s = pythagoras(bruchwertBerechnen(a, 2) * sqrt(2), h, PythagorasAction::plus);
			M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
		if (typ2 == PyramideAngaben::s) {
			a = pythagoras(s, h, PythagorasAction::minus) / 2 * sqrt(2);
			hs = pythagoras(s, bruchwertBerechnen(a, 2), PythagorasAction::minus);
			M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
	}
	if (typ1 == PyramideAngaben::hoeheSeite)
	{
		hs = num1;
		if (typ2 == PyramideAngaben::a) {
			a = num2;
			h = pythagoras(hs, bruchwertBerechnen(a, 2), PythagorasAction::minus);
			s = pythagoras(bruchwertBerechnen(a, 2) * sqrt(2), h, PythagorasAction::plus);
			M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
		if (typ2 == PyramideAngaben::hoehe) {
			h = num2;
			a = pythagoras(hs, h, PythagorasAction::minus) * 2;
			s = pythagoras(bruchwertBerechnen(a, 2) * sqrt(2), h, PythagorasAction::plus);
			M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
		if (typ2 == PyramideAngaben::s) {
			s = num2;
			a = pythagoras(s, hs, PythagorasAction::minus) * 2;
			h = pythagoras(hs, bruchwertBerechnen(a, 2), PythagorasAction::minus); M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
	}
	if (typ1 == PyramideAngaben::s)
	{
		s = num1;
		if (typ2 == PyramideAngaben::a) {
			a = num2;
			hs = pythagoras(s, bruchwertBerechnen(a, 2), PythagorasAction::minus);
			h = pythagoras(hs, bruchwertBerechnen(a, 2), PythagorasAction::minus);
			M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
		if (typ2 == PyramideAngaben::hoehe) {
			h = num2;
			a = pythagoras(s, h, PythagorasAction::minus) / 2 * sqrt(2);
			hs = pythagoras(s, bruchwertBerechnen(a, 2), PythagorasAction::minus);
			M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
		if (typ2 == PyramideAngaben::hoeheSeite) {
			hs = num2;
			a = pythagoras(s, hs, PythagorasAction::minus) * 2;
			h = pythagoras(hs, bruchwertBerechnen(a, 2), PythagorasAction::minus); M = 2 * a * hs;
			G = a*a;
			O = M + G;
			V = bruchwertBerechnen(1, 3) * G * h;
		}
	}
}


Pyramide::~Pyramide()
{
}
