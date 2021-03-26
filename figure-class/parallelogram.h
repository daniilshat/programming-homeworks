#pragma once
#include "quad.h"

class Parallelogram : public Quad {
public:
    Parallelogram(double a, double b);

protected:
    double _a;
    double _b;
    double _c;
    double _d;
};