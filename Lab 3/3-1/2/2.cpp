#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2, str;
    cin >> str1 >> str2;
    str = str1 + str2;
    cout << str << endl << str[0] << endl << str[str.length()-1] << endl;

    return 0;
}