#pragma once
#include <cmath>

enum class PythagorasAction{ plus, minus };

double bruchwertBerechnen(double zaehler, double nenner);

double pythagoras(double first, double second, PythagorasAction action);