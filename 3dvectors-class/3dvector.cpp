#include "./3dvector.h"
#include <iostream>
#include <cmath>

Vector3d::Vector3d() {
    x = 1;
    y = 1;
    z = 1;
}

Vector3d::Vector3d(int x1, int y1, int z1) {
    x = x1;
    y = y1;
    z = z1;
}

Vector3d::Vector3d(int x1, int y1, int z1, int x2, int y2, int z2) {
    x = x2 - x1;
    y = y2 - y1;
    z = z2 - z1;
}

Vector3d Vector3d::sum(Vector3d v) {
    return Vector3d(x + v.x, y + v.y, z + v.z);
}

int Vector3d::scalar(Vector3d v) {
    int s;
    x = x * v.x;
    y = y * v.y;
    z = z * v.z;
    s = x + y + z;
    return s;
}

Vector3d Vector3d::number(int a) {
    return Vector3d(x * a, y * a, z * a);
}

int Vector3d::length() {
    double s;
    s = sqrt(x*x + y*y + z*z);
    return s;
}

void Vector3d::printVector() {
    std::cout << "Vector coordinates: ";
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

const Vector3d operator + (Vector3d v1, Vector3d v2) {
  return Vector3d(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

