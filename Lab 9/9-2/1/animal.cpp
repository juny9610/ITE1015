#include "animal.h"

Animal::Animal(string name, int age) {
    this->name = name;
    this->age = age;
}

void Animal::printInfo() {}

Zebra::Zebra(string name, int age, int numStripes) : Animal(name, age) {
    this->numStripes = numStripes;
}

void Zebra::printInfo() {
    cout << "Zebra, Name: " << this->name << ", Age: " << this->age << ", Number of Stripes: " << this->numStripes << endl;
}

Cat::Cat(string name, int age, string favoriteToy) : Animal(name, age) {
    this->favoriteToy = favoriteToy;
}

void Cat::printInfo() {
    cout << "Cat, Name: " << this->name << ", Age: " << this->age << ", Favorite toy: " << this->favoriteToy << endl;
}