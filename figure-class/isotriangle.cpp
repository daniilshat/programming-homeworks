#include "triangle.h"
#include_next "figure.h"
#include "isotriangle.h"

Isotriangle::Isotriangle(double a, double b) {
    _name = "Isosceles Triangle";
    _a = a;
    _b = a;
    _c = b;
}
