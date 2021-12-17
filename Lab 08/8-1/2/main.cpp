#include "drop.h"

int main(void) {
    string command;
    float n;
    Earth e;
    Moon m;

    while(true) {
        cin >> command;
        if(command == "quit") break;

        cin >> n;
        if(command == "Earth") {
            e.simulate(n);
        }

        if(command == "Moon") {
            m.simulate(n);
        }
    }
    return 0;
}