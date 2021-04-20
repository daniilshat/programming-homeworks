//
// Created by daniilshat on 06.04.2021.
//

#pragma once
#include <iostream>

class Vector {
public:
    //Default constructor and destructor
    Vector();
    ~Vector();

    //Custom constructors and destructors
    Vector(const Vector& r1);
    Vector(int elements, int value = 0);
    Vector(const std::initializer_list<int>& list);


    //Initialization of functions
    void pushBack(int value);
    void popBack();
    void Insert(int index, int value);
    void Erase(int index);
    void Clear();

    int Size() const;
    int Capacity() const;
    bool Empty() const;

    //Operations with vectors
    bool operator==(const Vector& r1) const;
    bool operator!=(const Vector& r1) const;

    friend std::ostream& operator <<(std::ostream& ostr, const Vector& r1);

    Vector& operator =(const Vector& r1);
    int& operator[](int index);
    int& At(int index);
    int& Front();
    int& Back();

private:
    //Initialization of variables
    int size;
    int capacity;
    int* array;
};
