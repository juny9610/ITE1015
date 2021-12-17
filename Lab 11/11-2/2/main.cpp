#include "my_vector2.h"

int main() {
    string command;
    MyVector2 a, b, c;
    int length;
    int setOption = 0;

    while(true) {
        cin >> command;
        if(command == "quit") break;

        else if(command == "new") {
            cin >> length;
            a = MyVector2(length);
            b = MyVector2(length);
            c = MyVector2(length);

            cout << "enter a" << endl; cin >> a;
            cout << "enter b" << endl; cin >> b;
        }

        else if(command == "print") {
            string object1;
            cin >> object1;
            if(object1 == "a") cout << a << endl;
            else if(object1 == "b") cout << b << endl;
            else if(object1 == "c") cout << c << endl;
        }

        else if(command == "set") {
            string opt;
            cin >> opt;
            if(opt == "assign") setOption = 1;
        }

        else if(command == "c=") {
            string object1, op, object2;
            cin >> object1 >> op >> object2;
            if(object1 == "a") {
                if(op == "+") {
                    if(object2 == "a") c = a + a;
                    else if(object2 == "b") c = a + b;
                    else c = a + stoi(object2);
                }
                else if(op == "-") {
                    if(object2 == "a") c = a - a;
                    else if(object2 == "b") c = a - b;
                    else c = a + stoi(object2);
                }
                if(setOption == 0) cout << "(copy constructor)" << endl;
                else if(setOption == 1) {
                    cout << "(assignment operator)" << endl;
                    setOption = 0;
                }
            }
            else if(object1 == "b") {
                if(op == "+") {
                    if(object2 == "a") c = b + a;
                    else if(object2 == "b") c = b + b;
                    else c = b + stoi(object2);
                }
                else if(op == "-") {
                    if(object2 == "a") c = b - a;
                    else if(object2 == "b") c = b - b;
                    else c = b + stoi(object2);
                }
                if(setOption == 0) cout << "(copy constructor)" << endl;
                else if(setOption == 1) {
                    cout << "(assignment operator)" << endl;
                    setOption = 0;
                }
            }   
        }
    }

    return 0;
}