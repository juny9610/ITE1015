#include "my_vector.h"

int main() {
    string command;
    MyVector a, b, c;
    int length;

    while(true) {
        cin >> command;
        if(command == "quit") break;

        else if(command == "new") {
            cin >> length;
            a = MyVector(length);
            b = MyVector(length);
            c = MyVector(length);

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
            }   
        }
    }

    return 0;
}