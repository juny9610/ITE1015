#include <algorithm>
#include <iostream>
#include "shapes.h"

using namespace std;

void Circle::setInfo(double _x, double _y, double _r) {
    x = _x, y = _y, r = _r, pi = 3.14;
}

void Circle::getArea() {
    area = pi * (r * r);
}

void Circle::getPerimeter() {
    perimeter = 2 * pi * r;
}

void Circle::print() {
    cout << "area: " << area << ", perimeter: " << perimeter << endl;
}

void Rectangle::setInfo(double _x1, double _y1, double _x2, double _y2) {
    x1 = _x1, y1 = _y1, x2 = _x2, y2 = _y2;
}

void Rectangle::getArea() {
    double len1 = abs(x1 - x2);
    double len2 = abs(y1 - y2);
    area = len1 * len2;
}

void Rectangle::getPerimeter() {
    double len1 = abs(x1 - x2);
    double len2 = abs(y1 - y2);
    perimeter = (len1 + len2) * 2;
}

void Rectangle::print() {
    cout << "area: " << area << ", perimeter: " << perimeter << endl;
}