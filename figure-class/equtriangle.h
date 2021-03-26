#pragma once
#include "triangle.h"
#include "figure.h"

class Equtriangle : public Triangle {
public:
    Equtriangle(double a);

protected:
    double _a;
    double _b;
    double _c;
};