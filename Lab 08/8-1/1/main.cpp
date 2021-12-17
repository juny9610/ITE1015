#include "number.h"

int main(void) {
    string command;
    int n;
    Number num;
    Square sq;
    Cube cb;

    while(true) {
        cin >> command;
        if(command == "quit") break;

        cin >> n;
        if(command == "number") {
            num.setNumber(n);
            cout << "getNumber(): " << num.getNumber() << endl;
        }

        if(command == "square") {
            sq.setNumber(n);
            cout << "getNumber(): " << sq.getNumber() << endl;
            cout << "getSquare(): " << sq.getSquare() << endl;
        }

        if(command == "cube") {
            cb.setNumber(n);
            cout << "getNumber(): " << cb.getNumber() << endl;
            cout << "getSquare(): " << cb.getSquare() << endl;
            cout << "getCube(): " << cb.getCube() << endl;
        }
    }
    return 0;
}