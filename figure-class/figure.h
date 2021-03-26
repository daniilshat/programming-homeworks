#pragma once
#include <iostream>
#include <string>

class Figure {
public:
    virtual double calcS() const = 0;
    virtual double calcP() const = 0;

    string getName() const;

protected:
    string _name;
};