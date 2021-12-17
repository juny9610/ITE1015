#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string primeFactorization(unsigned int _number) {
    string res = "";

    int cnt = 0;
    bool flag = false;
    while(_number%2 == 0) {
        cnt++;
        _number /= 2;
        flag = true;
    }
    if(cnt != 0) res += "2^" + to_string(cnt);

    for(int i = 3; i <= sqrt(_number); i += 2) {
        cnt = 0;
        while(_number%i == 0) {
            cnt++;
            _number /= i;
        }
        if(cnt != 0) res += " x " + to_string(i) + "^" + to_string(cnt);
    }
    
    if(flag && _number > 2) res += " x ";
    if(_number > 2) res += to_string(_number) + "^1"; 

    return res;
}

int main(void) {
    unsigned int number;
    cin >> number;

    cout << primeFactorization(number) << endl;
    return 0;
}