#pragma once
#include "ellipse.h"

class Circle : public Ellipse {
public:
    Circle(double diameter);
    double calcP() const override;
    double calcS() const override;

protected:
    double _diameter;

};