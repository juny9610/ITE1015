#ifndef __rect__
#define __rect__

#include <iostream>
using namespace std;

class Shape {
public:
    Shape(int width, int height); // Implement to store necessary data as member variables
    int getArea(); // Returns the area of this rectangle
    int getPerimeter(); // Returns the perimeter of this rectangle
protected:
    // Define member variables you need
    int _width, _height;
    int _area, _perimeter;
};

class Square: public Shape {
public:
    Square(int width); // Implement to call the parent class's constructor properly
    void print(); // Print out information about this object(ex. '5x5Square')
};

class NonSquare: public Shape {
public:
    NonSquare(int width, int height); // Implement to call the parent class's constructor properly
    void print(); // Print out information about this object (ex. '2x7NonSquare')
};

#endif