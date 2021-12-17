#include <iostream>

using namespace std;

int** magicSquare(int** arr, int N) {
    int x = 0, y = N/2, cnt = 0;
    for(int i = 0; i < N*N; i++) {
        cnt++;
        if(x < 0) x += N;
        if(y >= N) y -= N;
        arr[x][y] = cnt;
        if(cnt%N == 0) {
            x++;
            continue;
        }
        x--;
        y++;
    }

    return arr;
}

int main() {
    int N;
    cin >> N;
    if(N%2 == 0 || N < 3) return 0;

    int** arr = new int*[N];
    for(int i = 0; i < N; i++) arr[i] = new int[N];

    arr = magicSquare(arr, N);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    delete[] arr;

    return 0;
}