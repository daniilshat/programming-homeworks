#include "ellipse.h"
#include <iostream>

Ellipse::Ellipse(double a, double b) {
    _name = "Ellipse";
    _a = a;
    _b = b;
}

double Ellipse::calcS() const {
    return PI * _a * _b;
}

double Ellipse::calcP() const {
    return 2 * PI * sqrt((pow(_a, 2) + pow(_b, 2)) / 2);
}