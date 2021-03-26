#include "quad.h"
#include <cmath>

Quad::Quad(double a, double b, double c, double d) {
    _name = "Quad";
    _a = a;
    _b = b;
    _c = c;
    _d = d;
}

double Quad::calcP() const {
    return _a + _b + _c + _d;
}

double Quad::calcS() const {
    double semiP = calcP() / 2;
    return sqrt((semiP - _a) * (semiP - _b) *
                (semiP - _c) * (semiP - _d));
}