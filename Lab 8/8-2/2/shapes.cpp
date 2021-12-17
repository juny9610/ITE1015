#include "shapes.h"

Shape::Shape(int x, int y, int width, int height, char brush) {
	this->_x = x;
	this->_y = y;
	this->_width = width;
	this->_height = height;
	this->_brush = brush;
}

Square::Square(int x, int y, int width, char brush): Shape(x, y, width, width, brush) {}
double Square::GetArea() { return this->_width * this->_width; }
int Square::GetPerimeter() { return 4 * this->_width; }
void Square::Draw(int canvas_width, int canvas_height) {
	char **canvas = new char *[canvas_height];
	for (int i = 0; i < canvas_height; i++) canvas[i] = new char[canvas_width];

	for (int i = 0; i < canvas_height; i++) {
		for (int j = 0; j < canvas_width; j++) {
			canvas[i][j]='.';
		}
	}

	for(int i = this->_y; i < this->_y+this->_width; i++) {
		for(int j = this->_x; j < this->_x+this->_width; j++) {
			if((i>=0 && i<canvas_height) && (j>=0 && j<canvas_width)) canvas[i][j] = this->_brush;
		}
	}

    cout << " ";
    for(int i = 0; i < canvas_width; i++) cout << i;
    cout << endl;

	for (int i = 0; i < canvas_height; i++) {
		cout << i;
		for (int j = 0; j < canvas_width; j++) {
			cout << canvas[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < canvas_height; i++) delete[] canvas[i];
	delete[] canvas;
}

Rectangle::Rectangle(int x, int y, int width, int height, char brush): Shape(x, y, width, height, brush) {}
double Rectangle::GetArea() { return this->_width * this->_height; }
int Rectangle::GetPerimeter() { return (this->_width + this->_height) * 2; }
void Rectangle::Draw(int canvas_width, int canvas_height) {
	char **canvas = new char *[canvas_height];
	for (int i = 0; i < canvas_height; i++) canvas[i] = new char[canvas_width];

	for (int i = 0; i < canvas_height; i++) {
		for (int j = 0; j < canvas_width; j++) {
			canvas[i][j]='.';
		}
	}

	for(int i = this->_y; i < this->_y+this->_width; i++) {
		for(int j = this->_x; j < this->_x+this->_height; j++) {
			if((i>=0 && i<canvas_height) && (j>=0 && j<canvas_width)) canvas[i][j]=this->_brush;
		}
	}

    cout << " ";
    for(int i = 0; i < canvas_width; i++) cout << i;
    cout << endl;

	for (int i = 0; i < canvas_height; i++) {
		cout << i;
		for (int j = 0; j < canvas_width; j++) {
            cout << canvas[i][j];
		}
		cout<<endl;
	}

	for (int i = 0; i < canvas_height; i++) delete[] canvas[i];
	delete[] canvas;
}

Diamond::Diamond(int x, int y, int width, char brush): Shape(x, y, width, width, brush) {}
double Diamond::GetArea() { return (this->_width * 2 + 1) * (this->_width * 2 + 1) / 2.0; }
int Diamond::GetPerimeter() { return 4 * (this->_width + 1); }
void Diamond::Draw(int canvas_width, int canvas_height) {
	char **canvas = new char *[canvas_height];
	for (int i = 0; i < canvas_height; i++) canvas[i] = new char[canvas_width];

	for (int i = 0; i < canvas_height; i++) {
		for (int j = 0; j < canvas_width; j++) {
			canvas[i][j]='.';
		}
	}

	for(int i = this->_y; i < this->_y + this->_width*2+1; i++) {
		if(i < this->_y + this->_width+1) {
			for(int j = this->_x- i + this->_y; j < this->_x+i - this->_y+1; j++) {
				if((i>=0 && i<canvas_height) && (j>=0 && j<canvas_width)) canvas[i][j]=this->_brush;
			}
		} 
        else {
			for(int j = this->_x-i + this->_y+(i-this->_y - this->_width)*2; j < (this->_x-i + this->_y+(i-this->_y - this->_width)*2) + this->_width * 2 - (i - this->_y - this->_width)*2+1; j++) {
				if((i>=0 && i<canvas_height) && (j>=0 && j<canvas_width)) canvas[i][j]=this->_brush;
			}
		}
	}

    cout << " ";
    for(int i = 0; i < canvas_width; i++) cout << i;
    cout << endl;

	for (int i = 0; i < canvas_height; i++) {
        cout << i;
		for (int j = 0; j < canvas_width; j++) {
            cout << canvas[i][j];
		}
		cout<<endl;
	}

	for (int i = 0; i < canvas_height; i++) delete[] canvas[i];
	delete[] canvas;
}