#include "number.h"

int Square::getSquare() {
    int n = this->getNumber();
    n *= n;
    
    return n;
}

int Cube::getCube() {
    int n = this->getNumber();
    int m = this->getSquare();

    return n * m;
}