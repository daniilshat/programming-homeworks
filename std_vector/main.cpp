//
// Created by daniilshat on 06.04.2021.
//

#include <iostream>
#include <Vector.h>

int main() {
    Vector v {1, 2, 3, 4, 5};
    Vector w;
    std::cout << v;
    std::cout << v.Size() << std::endl;
    std::cout << v.Capacity() << std::endl;
    v.pushBack(3);
    std::cout << v;
    v.popBack();
    std::cout << v;
    w = v;
    std::cout << w;

    return 0;
}