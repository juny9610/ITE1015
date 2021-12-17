#include <iostream>
#include <vector>
using namespace std;

class A {
public:
    virtual string getTypeInfo() {
        return "This is an instance of class A";
    }
};

class B : public A {
public:
    virtual string getTypeInfo() {
        return "This is an instance of class B";
    }
};

class C : public B {
public:
    virtual string getTypeInfo() {
        return "This is an instance of class C";
    }
};

void printObjectTypeInfo1(A *object) {
    cout << object->getTypeInfo() << endl;
}

void printObjectTypeInfo2(A &object) {
    cout << object.getTypeInfo() << endl;
}

int main(void) {
    vector<A*> objects;
    string command;
    while(true) {
        cin >> command;
        if(command == "quit") break;

        else if(command == "A") objects.push_back(new A);
        else if(command == "B") objects.push_back(new B);
        else if(command == "C") objects.push_back(new C);
    }

    for(int i = 0; i < objects.size(); i++) {
        printObjectTypeInfo1(objects[i]);
        printObjectTypeInfo2(*objects[i]);
        delete objects[i];
    }

    return 0;
}