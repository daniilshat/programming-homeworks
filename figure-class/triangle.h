#pragma once
#include "figure.h"

class Triangle : public Figure {
public:
    Triangle (double a, double b, double c);

    double calcS() const override;
    double calcP() const override;

protected:
    double _a;
    double _b;
    double _c;
};