#pragma once
#include "figure.h"
#include <cmath>

class Ellipse : public Figure {
public:
    Ellipse(double a, double b);
    double calcP() const override;
    double calcS() const override;

protected:
    double _a;
    double _b;
    const double PI = 3.141592653589793238463;
};