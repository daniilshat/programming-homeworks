#include "triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(double a, double b, double c) {
    _name = Triangle;
    _a = a;
    _b = b;
    _c = c;
}

double Triangle::calcP() const {
    return _a + _b + _c;
}

double Triangle::calcS() const {
    double semiP = calcP() / 2;
    return sqrt(semiP *(semiP - _a) *
            (semiP - _b) * (semiP - _c));
}