#ifndef __canvas__
#define __canvas__

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Canvas {
public:
	Canvas(size_t row, size_t col);
	~Canvas();

	// Change this canvas size to w x h. Preserve already existing shapes on the canvas.
	void Resize(size_t w, size_t h);

	// Dot with the brush at (x,y). If (x,y) is outside the canvas, just ignore it.
	bool DrawPixel(int x, int y, char brush);

	// Print out the canvas
	void Print();

	// Erase all (initialize with '.')
	void Clear();

private:
	// Define data member to save drawn shapes (note the resize function)
	size_t row, col;
	char** pixels;
};

class Shape {
public:
	virtual ~Shape();
	virtual void Draw(Canvas* canvas) {};
	virtual void Dump() {};

protected:
	// Define common properties of shapes
	int x, y;
	int width, height;
	char brush;
};

class Rectangle : public Shape { /* Define required members */ 
public:
	Rectangle(int x, int y, int w, int h, char brush);
	virtual void Draw(Canvas* canvas);
	virtual void Dump();
};

class UpTriangle : public Shape { /* Define required members */ 
public:
	UpTriangle(int x, int y, int h, char brush);
	virtual void Draw(Canvas* canvas);
	virtual void Dump();
};

class DownTriangle : public Shape { /* Define required members */ 
public:
	DownTriangle(int x, int y, int h, char brush);
	virtual void Draw(Canvas* canvas);
	virtual void Dump();
};

class Diamond : public Shape { /* Define required members */ 
public:
	Diamond(int x, int y, int h, char brush);
	virtual void Draw(Canvas* canvas);
	virtual void Dump();
};

#endif