#include "shape.hpp"

Shape::Shape(double width, double height) : m_width(width), m_height(height) { 
    if (!checkConsistency()) {
        throw std::invalid_argument("Invalid shape dimensions");
         } 
        }

double Shape::getWidth() const { 
    return m_width;
     }

double Shape::getHeight() const { 
    return m_height;
     }

void Shape::setWidth(double width) {
     m_width = width; 
     if (!checkConsistency()) { 
        throw std::invalid_argument("Invalid shape dimensions");
         }
    }

void Shape::setHeight(double height) { 
    m_height = height; 
    if (!checkConsistency()) { 
        throw std::invalid_argument("Invalid shape dimensions"); 
        } 
    }

double Shape::getArea() const { 
    return m_width * m_height; 
    }

double Shape::getPerimeter() const { 
    return 2 * (m_width + m_height);
     }

bool Shape::operator==(const Shape& other) const { 
    return (m_width == other.m_width && m_height == other.m_height);
     }

bool Shape::checkConsistency() const { 
    return (m_width > 0 && m_height > 0); 
    }

void Shape::saveToFile(std::string fileName) const { 
    std::ofstream file(fileName); 
    if (file.is_open()) { 
        file << m_width << " " << m_height; file.close(); 
        } 
    }

void Shape::loadFromFile(std::string fileName) { 
    std::ifstream file(fileName);
     if (file.is_open()) { 
        file >> m_width >> m_height;
         file.close(); 
         } 
    }