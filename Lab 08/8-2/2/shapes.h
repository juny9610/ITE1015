#ifndef __shapes__
#define __shapes__

#include <iostream>
using namespace std;

class Shape {
public:
	Shape();
	Shape(int x, int y, int width, int height, char brush);

	double GetArea() {};
	int GetPerimeter() {};
	void Draw(int canvas_width, int canvas_height) {};

protected:
	int _x, _y;
    int _width, _height;
	char _brush;
};

class Square: public Shape {
public:
	Square(int x, int y, int width, char brush);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
};

class Rectangle: public Shape {
public:
	Rectangle(int x, int y, int width, int height, char brush);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
};

class Diamond: public Shape {
public:
	Diamond(int x, int y, int width, char brush);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
};

#endif