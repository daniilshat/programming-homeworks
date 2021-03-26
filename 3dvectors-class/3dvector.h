#pragma once

class Vector3d {
public:
    //координаты начала и конца вектора
    int x, y, z;

    //конструктор по умолчанию
    Vector3d();

    //начало - (0,0,0) конец - (x1, y1, z1)
    Vector3d(int x1, int y1, int z1);

    //начало - (x, y, z) конец - (x1, y1, z1)
    Vector3d(int x1, int y1, int z1, int x2, int y2, int z2);

    Vector3d sum(Vector3d v); //сумма двух векторов
    int scalar(Vector3d v); //скалярное произведение
    Vector3d number(int a); //умножени на число
    int length(); //длина вектора

    void printVector ();
};

const Vector3d operator + (Vector3d v1, Vector3d v2);