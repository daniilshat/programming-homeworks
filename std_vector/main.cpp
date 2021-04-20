//
// Created by daniilshat on 06.04.2021.
//

#include <iostream>
#include <Vector.h>

int main() {
    Vector v {1, 2, 3, 4, 5, 6, 7, 8, 9};
    v.pushBack(23);
    std::cout << v;
    v.Insert(2, 666);
    std::cout << v;
    v.Insert(2, 666);
    std::cout << v;
    v.Insert(2, 666);
    std::cout << v;




    return 0;
}