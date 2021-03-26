#pragma once
#include "figure.h"

class Quad : public Figure {
public:
    Quad(double a, double b, double c, double d);
    double calcS() const override;
    double calcP() const override;

protected:
    double _a;
    double _b;
    double _c;
    double _d;
};

