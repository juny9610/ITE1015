#include "shape.h"

int main(void) {
    vector<Shape*> objects;
    string command;
    double width, height;
    
    while(true) {
        cin >> command;
        if(command == "0") break;

        if(command == "r") {
            cin >> width >> height;
            objects.push_back(new Rectangle(width, height));
        }
        if(command == "t") {
            cin >> width >> height;
            objects.push_back(new Triangle(width, height));
        }
    }

    for(int i = 0; i < objects.size(); i++) {
        cout << objects[i]->getArea() << endl;
        delete objects[i];
    }

    return 0;
}