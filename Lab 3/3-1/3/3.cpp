#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

string add(string a, string b) {
    return a + "-" + b;
}

float add(float a, float b=0.9) {
    return a + b;
}

int main() {
    int int1, int2;
    string str1, str2;
    float float1;

    cin >> int1 >> int2 >> str1 >> str2 >> float1;
    cout << add(int1,int2) << endl << add(str1,str2) << endl << add(float1) << endl;
    
    return 0;
}