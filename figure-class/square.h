#pragma once
#include "quad.h"

class Square : public Quad {
public:
    Square(double a);

protected:
    double _a;
    double _b;
    double _c;
    double _d;
};