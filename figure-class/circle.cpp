#include "circle.h"

Circle::Circle(double diameter) {
    _name = "Circle";
    _diameter = diameter;
}

double Circle::calcP() const {
    return _diameter * PI;
}

double Circle::calcS() const {
    return pow(_diameter, 2) * PI;
}