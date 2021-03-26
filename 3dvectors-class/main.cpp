#include <iostream>
#include "3dvector.h"

int main() {
    Vector3d A(1, 2, 3, 4, 5, 6);
    Vector3d B(2, 3,5);
    Vector3d C(0, 0, 0);
    Vector3d D(0, 0, 0);

    std::cout << "A: ";
    A.printVector();
    std::cout << "B: ";
    B.printVector();
    std::cout << "A + B: ";
    C = A + B;
    C.printVector();

    std::cout << "\n";
    int scalarmod = A.scalar(B);
    std::cout << "Scalar mod A * B: " << scalarmod << std::endl;

    std::cout << "\n";
    std::cout << "B * 3: ";
    B.number(3).printVector();

    std::cout << "\n";
    int lengthA = B.length();
    std::cout << "Length: " <<lengthA << std::endl;

    return 0;
}
