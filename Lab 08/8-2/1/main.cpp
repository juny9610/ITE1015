#include "rect.h"

int main(void) {
    string command;

    while(true) {
        cin >> command;
        if(command == "quit") break;

        if(command == "square") {
            int n; cin >> n;
            Square s(n);
            s.print();
        }

        if(command == "nonsquare") {
            int n1, n2; cin >> n1 >> n2;
            NonSquare ns(n1, n2);
            ns.print();
        }
    }
    return 0;
}