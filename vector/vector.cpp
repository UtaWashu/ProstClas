#include "vector.hpp"

#include <cmath>
#include <fstream>

Vector::Vector() : x(0), y(0), z(0) {}

Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) {}

double Vector::getLength() {
    return std::sqrt(x*x + y*y + z*z);
}

double Vector::getAngleX() {
    return std::acos(x / getLength());
}

double Vector::getAngleY() {
    return std::acos(y / getLength());
}

double Vector::getAngleZ() {
    return std::acos(z / getLength());
}

Vector Vector::operator+(const Vector& other) {
    return Vector(x + other.x, y + other.y, z + other.z);
}

Vector Vector::operator-(const Vector& other) {
    return Vector(x - other.x, y - other.y, z - other.z);
}

Vector Vector::operator*(double scalar) {
    return Vector(x * scalar, y * scalar, z * scalar);
}

bool Vector::operator==(const Vector& other) const{
    return (x == other.x) && (y == other.y) && (z == other.z);
}

void Vector::saveToFile(const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << x << " " << y << " " << z << std::endl;
        file.close();
    }
}

void Vector::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        file >> x >> y >> z;
        file.close();
    }
}