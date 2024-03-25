#include "vector.hpp"
#include <iostream>

int main() {
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    Vector v3 = v1 + v2;
    Vector v4 = v1 - v2;
    Vector v5 = v1 * 2.0;

    std::cout << "Length of v1: " << v1.getLength() << std::endl;
    std::cout << "Angle between v1 and X axis: " << v1.getAngleX() << std::endl;
    std::cout << "Angle between v1 and Y axis: " << v1.getAngleY() << std::endl;
    std::cout << "Angle between v1 and Z axis: " << v1.getAngleZ() << std::endl;

    if (v1 == v2) {
        std::cout << "v1 is equal to v2" << std::endl;
    } else {
        std::cout << "v1 is not equal to v2" << std::endl;
    }

    v1.saveToFile("vector.txt");
    v2.loadFromFile("vector.txt");

    return 0;
}