#include "rect.h"

Shape::Shape(int width, int height) {
    _width = width; 
    _height = height;
}

int Shape::getArea() {
    _area = _width * _height;
    return _area;
}

int Shape::getPerimeter() {
    _perimeter = 2 * (_width + _height);
    return _perimeter;
}

Square::Square(int width) : Shape(width, width) {}

void Square::print() {
    cout << _width << "x" << _width << " Square" << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
}

NonSquare::NonSquare(int width, int height) : Shape(width, height) {}

void NonSquare::print() {
    cout << _width << "x" << _height << " Nonsquare" << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
}