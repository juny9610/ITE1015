#include <iostream>
#include <string>

using namespace std;

namespace first_space {
    void print() {
        cout << "Print from first space" << endl;
    }
}

namespace second_space {
    void print() {
        cout << "Print from second space" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    
    if(n == 1) first_space::print();
    else second_space::print();

    return 0;
}