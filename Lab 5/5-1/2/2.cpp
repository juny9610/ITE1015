#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string str = "";
    int sum = 0;

    for(int i = 1; i < argc; i++) {
        int tmp = atoi(argv[i]);
        if(tmp != 0) sum += tmp;
        else str += argv[i];
    }

    cout << str << endl << sum << endl;
    
    return 0;
}