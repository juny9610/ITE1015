class Circle {
    double x, y, r;
    double pi;
    double area, perimeter;

public:
    void setInfo(double _x, double _y, double _r);
    void getArea();
    void getPerimeter();
    void print();
};

class Rectangle {
    double x1, y1;
    double x2, y2;
    double area, perimeter;

public:
    void setInfo(double _x1, double _y1, double _x2, double _y2);
    void getArea();
    void getPerimeter();
    void print();
};