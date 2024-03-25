#include "shape.hpp"

int main() {
    Shape shape(5, 7);
    std::cout << "Width: " << shape.getWidth() << std::endl;
    std::cout << "Height: " << shape.getHeight() << std::endl;
    std::cout << "Area: " << shape.getArea() << std::endl;
    std::cout << "Perimeter: " << shape.getPerimeter() << std::endl;

 
    shape.saveToFile("shape.txt");

    Shape loadedShape(0, 0);
    loadedShape.loadFromFile("shape.txt");
    std::cout << "Loaded Width: " << loadedShape.getWidth() << std::endl;
    std::cout << "Loaded Height: " << loadedShape.getHeight() << std::endl;

return 0;
}