//
// Created by daniilshat on 06.04.2021.
//

#include "Vector.h"

//Default constructor
Vector::Vector()
    : size(0),
      capacity(5),
      array(new int[capacity]) {

}

//Custom constructors
Vector::Vector(const Vector &r1)
    : size(r1.size),
      capacity(r1.capacity + 5),
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

Vector::Vector(const std::initializer_list<int>& list)
    : size(0),
      capacity(list.size() + 5),
      array(new int[capacity]) {
    for (int i : list) {
        pushBack(i);
    }
}

//Default destructors
Vector::~Vector() {
    delete[] array;
}

//Functions
void Vector::pushBack(int value) {
    if (size < capacity) {
        array[size] = value;
        ++size;
    }
    else {
        capacity *= 2;
        int* newarray = new int[capacity];
        for (int i = 0; i < size; ++i) {
            newarray[i] = array[i];
        }
        newarray[size] = value;
        ++size;
        delete[] array;
        array = newarray;
    }
}

void Vector::popBack() {
    if (size == 0) {
        throw std::logic_error("Pop Back function with empty Vector!");
    }
    --size;
}

void Vector::Insert(int index, int value) {
    if ((index < 0) || (index >= size)) {
        throw std::logic_error("Erase - Index out of range!");
    }

    if (size != capacity) {
        for (int i = size - 1; i >= index; --i) {
            array[i + 1] = array[i];
        }
        array[index] = value;
        ++size;
    }
    else {
        capacity *= 2;
        int* newarray = new int[capacity];
        for (int i = 0; i < size; ++i) {
            newarray[i] = array[i];
        }
        delete[] array;
        array = newarray;
        Insert(index, value);
    }
}

void Vector::Erase(int index) {
    if ((index < 0) || (index >= size)) {
        throw std::logic_error("Erase - Index out of range!");
    }
    for (int i = index; i < size - 1; ++i) {
        array[i] = array[i + 1];
    }
    --size;
}

void Vector::Clear() {
    size = 0;
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

Vector& Vector::operator=(const Vector &r1) {
    if (r1.size > size) {
        delete[] array;
        capacity = r1.size + 5;
        array = new int[capacity];
    }
    for (int i = 0; i < r1.Size(); ++i) {
        array[i] = r1.array[i];
    }
    size = r1.size;

    return *this;
}

int& Vector::operator[](int index) {
    return array[index];
}

int& Vector::At(int index) {
    if ((index < 0) || (index >= size)) {
        throw std::logic_error("At - Index out of range!");
    }
    return array[index];
}

int& Vector::Front() {
    return array[0];
}

int& Vector::Back() {
    return array[size - 1];
}


