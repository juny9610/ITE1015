#include <iostream>
#include <vector>
using namespace std;

class A {
public:
    virtual void test() {
        cout << "A::test()" << endl;
    }
};

class B : public A {
public:
    virtual void test() {
        cout << "B::test()" << endl;
    }
};

class C : public B {
public:
    virtual void test() {
        cout << "C::test()" << endl;
    }
};

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

    for(int i = 0; i < objects.size(); i++){
        objects[i]->test();
        delete objects[i];
    }

    return 0;
}