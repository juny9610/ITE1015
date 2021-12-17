#include <iostream>

using namespace std;

int main() {
    int n, target, cnt = 0;
    cin >> n;
    int* arr = new int[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    cin >> target;
    for(int i = 0; i < n; i++) if(arr[i] == target) cnt++;

    cout << "target value: " << target << endl;
    cout << "target count: " << cnt << endl;

    return 0;
}