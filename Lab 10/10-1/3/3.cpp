#include <iostream>
#include <vector>
using namespace std;

class B {
public:
    virtual ~B() {}
};

class C : public B {
public:
    void test() { cout << "C::test()" << endl; }
};

class D : public B {
public:
    void test() { cout << "D::test()" << endl; }
};

int main() {
    string input;
    vector<B*> objects;

    while(true) {
        cin >> input;

        if(input == "0") break;

        if(input == "B") objects.push_back(new B());
        if(input == "C") objects.push_back(new C());
        if(input == "D") objects.push_back(new D());
    }

    for(int i = 0; i < objects.size(); i++) {
        C *c = dynamic_cast<C*>(objects[i]);
        D *d = dynamic_cast<D*>(objects[i]);
        if(c) c->test();
        if(d) d->test();
        delete objects[i];
    }

    return 0;
}