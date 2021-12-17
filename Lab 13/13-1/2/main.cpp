#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "input num(0~2):";
    cin >> n;

    try {
        throw string("exception handler");
    }
    catch (string& e) {
        cout << e << endl;
    }

    return 0;
}