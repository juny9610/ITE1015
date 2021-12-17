#include "shapes.h"

int main() {
    int canvas_width, canvas_height;
    cin >> canvas_width >> canvas_height;

    string command;
    int x, y;
    int width, height, distance;
    char brush;

    while(true) {
        cin >> command;

        if(command == "quit") break;

        if(command == "rect") {
            cin >> x >> y >> width >> height >> brush;
            Rectangle r = Rectangle(x, y, height, width, brush);
            cout << "Area: " << r.GetArea() << endl;
            cout << "Perimeter: " << r.GetPerimeter() << endl;
            r.Draw(canvas_width, canvas_height);
        } 
        
        if(command == "diamond") {
            cin >> x >> y >> distance >> brush;
            Diamond d = Diamond(x, y, distance, brush);
            cout << "Area: " << d.GetArea() << endl;
            cout << "Perimeter: " << d.GetPerimeter() << endl;
            d.Draw(canvas_width, canvas_height);
        } 
        
        if(command == "square") {
            cin >> x >> y >> width >> brush;
            Square s = Square(x, y, width, brush);
            cout << "Area: " << s.GetArea() << endl;
            cout << "Perimeter: " << s.GetPerimeter() << endl;
            s.Draw(canvas_width, canvas_height);
        }
    }
    return 0;
}