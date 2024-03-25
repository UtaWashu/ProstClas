#ifndef SHAPE_HPP 
#define SHAPE_HPP

#include <iostream> 
#include <fstream> 
#include <string>

class Shape { 
    public: 
    Shape(double width, double height);

 
    double getWidth() const;
    double getHeight() const;
    void setWidth(double width);
    void setHeight(double height);

    double getArea() const;
    double getPerimeter() const;

    bool operator==(const Shape& other) const;

    void saveToFile(std::string fileName) const;
    void loadFromFile(std::string fileName);
    private: double m_width; double m_height;

    bool checkConsistency() const;
};

#endif