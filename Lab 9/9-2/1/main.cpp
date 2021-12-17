#include "animal.h"

int main(void) {
    string command;
    string name;
    int age;

    vector<Animal*> animals;

    while(true) {
        cin >> command;
        if(command == "0") break;

        if(command == "z") {
            int numStripes;
            cin >> name >> age >> numStripes;
            animals.push_back(new Zebra(name, age, numStripes));
        }

        if(command == "c") {
            string favoriteToy;
            cin >> name >> age >> favoriteToy;
            animals.push_back(new Cat(name, age, favoriteToy));
        }
    }

    for(int i = 0; i < animals.size(); i++)
        animals[i]->printInfo();
    
    for(int i = 0; i < animals.size(); i++)
        delete animals[i];

    return 0;
}