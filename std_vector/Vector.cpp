//
// Created by daniilshat on 06.04.2021.
//

#include "Vector.h"

//Constructors
Vector::Vector()
    : size(0),
      capacity(5),
      array(new int[capacity]) {

}

Vector::Vector(const Vector &r1)
    : size(r1.size),
      capacity(r1.capacity),
      array(new int[capacity]) {

    for (int i = 0; i < r1.Size(); ++i) {
        array[i] = r1.array[i];
    }
}

Vector::Vector(int elements, int value)
    : size(elements),
      capacity(elements + 5),
      array(new int[capacity]) {

    for (int i = 0; i < size; ++i) {
           array[i] = value;
    }
}

//Destructors
Vector::~Vector() {
    delete[] array;
}

//Functions
void Vector::pushBack(int value) {
    array[size] = value;
    ++size;
}

int Vector::Size() const {
    return size;
}

int Vector::Capacity() const {
    return capacity;
}

bool Vector::Empty() const {
    return size == 0;
}

//Operations with vectors
bool Vector::operator==(const Vector& r1) const {
    if (Size() != r1.Size()) {
        return false;
    }

    for (int i = 0; i < Size(); ++i) {
        if (array[i] != r1.array[i]) {
            return false;
        }
    }
    return true;
}

bool Vector::operator!=(const Vector &r1) const {
    return !(*this == r1);
}

std::ostream &operator<<(std::ostream& ostr, const Vector& r1) {
    for (int i = 0; i < r1.size; ++i) {
        ostr << r1.array[i] << " ";
    }

    ostr << " | ";

    for (int i = r1.size; i < r1.capacity; ++i) {
        ostr << r1.array[i] << " ";
    }

    ostr << std::endl;

    return ostr;
}
