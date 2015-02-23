#include "KaiMath.h"

double bruchwertBerechnen(double zaehler, double nenner)
{
	return zaehler / nenner;
}

double pythagoras(double first, double second, PythagorasAction action)
{
	double firstQ = pow(first, 2);
	double secondQ = pow(second, 2);

	if (action == PythagorasAction::plus) {
		return sqrt(firstQ + secondQ);
	}
	else {
		return sqrt(firstQ - secondQ);
	}
}