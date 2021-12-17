#include "my_string2.h"

using namespace std;

int main(void) {
    string s1, s2, op, s3;
    MyString2 a, b, c;
    int setOption = 0;

    while(true) {
        cin >> s1;

        if(s1 == "quit") break;

        if(s1 == "new") {
            cout << "enter a" << endl; cin >> a;
            cout << "enter b" << endl; cin >> b;
        }

        if(s1 == "print") {
            cin >> s2; 
            if(s2 == "a") cout << a << endl;
            if(s2 == "b") cout << b << endl;
            if(s2 == "c") cout << c << endl;
        }

        if(s1 == "set") {
            cin >> s2;
            if(s2 == "assign") setOption = 1;
        }

        if(s1 == "c=") {
            cin >> s2 >> op >> s3;
            
            if(s2 == "a") {
                if(op == "*") c = a * stoi(s3);
                if(op == "+") {
                    if(s3 == "a") c = a + a;
                    if(s3 == "b") c = a + b;
                }
                if(setOption == 0) cout << "(copy constructor)" << endl;
                if(setOption == 1) {
                    cout << "(assignment operator)" << endl;
                    setOption = 0;
                }
            }

            if(s2 == "b") {
                if(op == "*") c = b * stoi(s3);
                if(op == "+") {
                    if(s3 == "a") c = b + a;
                    if(s3 == "b") c = b + b;
                    cout << "(assignment operator)" << endl;
                }
                if(setOption == 0) cout << "(copy constructor)" << endl;
                if(setOption == 1) {
                    cout << "(assignment operator)" << endl;
                    setOption = 0;
                }
            }
        }
    }

    return 0;
}