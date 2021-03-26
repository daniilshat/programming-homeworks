#include "circle.h"
#include "ellipse.h"
#include "equtriangle.h"
#include "figure.h"
#include "isotriangle.h"
#include "parallelogram.h"
#include "quad.h"
#include "rectangle.h"
#include "square.h"
#include "triangle.h"
#include <iostream>

int main() {
    Figure* t = new Triangle(2, 2, 2);
    cout << "Name: " << t->getName() << endl;
    cout << "Perimeter: " << t->calcP() << endl;
    cout << "Area: " << t->calcS() << endl;
}