#pragma once
#include "triangle.h"
#include "figure.h"

class Isotriangle : Triangle {
public:
    Isotriangle(double a, double b);

protected:
    double _a;
    double _b;
    double _c;
};