#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <string>

class Vector {
public:
    Vector();
    Vector(double x, double y, double z);

    double getLength();
    double getAngleX();
    double getAngleY();
    double getAngleZ();

    Vector operator+(const Vector& other);
    Vector operator-(const Vector& other);
    Vector operator*(double scalar);
    bool operator==(const Vector& other) const;

    void saveToFile(const std::string& filename);
    void loadFromFile(const std::string& filename);

private:
    double x;
    double y;
    double z;
};

#endif