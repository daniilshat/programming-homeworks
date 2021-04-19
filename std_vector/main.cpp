//
// Created by daniilshat on 06.04.2021.
//

#include <iostream>
#include <Vector.h>

int main() {
    Vector v1(11, 5);
    std::cout << v1 << std::endl;

    v1.pushBack(99);
    std::cout << v1 << std::endl;

    v1.pushBack(192);
    std::cout << v1 << std::endl;

    return 0;
}