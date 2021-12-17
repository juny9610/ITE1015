#ifndef __animal__
#define __animal__

#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
    Animal(string name, int age);
    virtual void printInfo();

    string name;
    int age;

};

class Zebra : public Animal {
public:
    Zebra(string name, int age, int numStripes);
    virtual void printInfo();

    int numStripes;
};

class Cat : public Animal {
public:
    Cat(string name, int age, string favoriteToy);
    virtual void printInfo();

    string favoriteToy;
};

#endif