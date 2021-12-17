#include "canvas.h"

Canvas::Canvas(size_t row, size_t col) {
	this->row = row;
	this->col = col;
	this->pixels = new char *[this->col];
	for(size_t i = 0; i < this->col; i++) this->pixels[i] = new char [this->row];
	this->Clear();
}

Canvas::~Canvas() {
	for(int i = 0; i < this->col; i++) {
		delete [] this->pixels[i];
		// this->pixels[i] = NULL;
	}
	delete [] this->pixels;
	// this->pixels = NULL;
}

void Canvas::Resize(size_t w, size_t h) {
	this->row = w;
	this->col = h;
	this->Clear();
}

bool Canvas::DrawPixel(int x, int y, char brush) {
	if((x < this->col && x >= 0) && (y < this->row && y >= 0)) {
		this->pixels[x][y] = brush;
		return true;
	}
	return false;
}

void Canvas::Print() {
	for(size_t i = 0; i < this->row; i++) {
		if(i == 0) cout << " " << i % 10;
		else cout << i % 10;
	}
	cout << endl;
	for(size_t i = 0; i < this->col; i++) {
		cout << i % 10;
		for (size_t j = 0; j < this->row; j++) cout << this->pixels[i][j];
		cout << endl;
	}
}

void Canvas::Clear() {
	for(size_t i = 0; i < this->col; i++) {
		for(size_t j = 0; j < this->row; j++) {
			this->pixels[i][j]='.';
		}
	}
}

Shape::~Shape() {}

Rectangle::Rectangle(int x,int y,int w,int h,char brush) {
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
	this->brush = brush;
}

void Rectangle::Draw(Canvas* canvas) {
	for(int i = this->y; i < this->y + this->height; i++) {
		for(int j = this->x; j < this->x + this->width; j++) {
			canvas->DrawPixel(i, j, this->brush);
		}
	}
}

UpTriangle::UpTriangle(int x,int y,int h,char brush) {
	this->x = x;
	this->y = y;
	this->height = h;
	this->brush = brush;
}

void UpTriangle::Draw(Canvas* canvas) {
	for(int i = this->y; i < this->y + this->height*2+1; i++) {
		if(i < this->y + this->height+1) {
			for(int j = this->x-i + this->y; j < this->x+i - this->y+1; j++) {
				canvas->DrawPixel(i, j, this->brush);
			}
		}
	}
}

DownTriangle::DownTriangle(int x,int y,int h,char brush) {
	this->x = x;
	this->y = y;
	this->height = h;
	this->brush = brush;
}

void DownTriangle::Draw(Canvas* canvas) {
	int val = 0;
	for(int i = this->x; i > this->x - this->height; i--) {
		for (int j = this->y - val; j < this->y - val + (this->x - i ) * 2 + 1; j++) {
			canvas->DrawPixel(i, j, this->brush);
		}
		val++;
	}
}

Diamond::Diamond(int x,int y,int h,char brush) {
	this->x = x;
	this->y = y;
	this->height = h;
	this->brush = brush;
}
void Diamond::Draw(Canvas* canvas) {
	for(int i = this->y; i < this->y + this->height*2+1; i++) {
		if(i < this->y + this->height +1) {
			for(int j = this->x- i + this->y; j < this->x+i - this->y+1; j++) {
				canvas->DrawPixel(i, j, this->brush);
			}
		} 
		
		else {
			for(int j = this->x- i+this->y+(i-this->y-this->height)*2; j< (this->x- i+this->y+(i-this->y-this->height)*2) + this->height * 2 - (i-this->y-this->height)*2+1; j++) {
				canvas->DrawPixel(i,j,this->brush);
			}
		}
	}
}

void Rectangle::Dump(){
	cout<<"rect "<<this->x<<" "<<this->y<<" "<<this->width<<" "<<this->height <<" "<<this->brush<<endl;
}

void UpTriangle::Dump(){
	cout<<"tri_up "<<this->x<<" "<<this->y<<" "<<this->height <<" "<<this->brush<<endl;
}

void DownTriangle::Dump(){
	cout<<"tri_down "<<this->x<<" "<<this->y<<" "<<this->height <<" "<<this->brush<<endl;
}

void Diamond::Dump(){
	cout<<"diamond "<<this->x<<" "<<this->y<<" "<<this->height <<" "<<this->brush<<endl;
}
