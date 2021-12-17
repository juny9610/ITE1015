#include <iostream>

using namespace std;

int** magicSquare(int** arr, int N) {
    int cnt = N*N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            arr[i][j] = cnt--;
        }
    }

    int start_x = N/4;
    int end_x = start_x*3;
    int start_y = 0;
    int end_y = N/4;
    for(int i = start_y; i < end_y; i++) {
        for(int j = start_x; j < end_x; j++) {
            int tmp = arr[i][j];
            arr[i][j] = arr[N-i-1][N-j-1];
            arr[N-i-1][N-j-1] = tmp;
        }
    }

    start_x = 0;
    end_x = N/4;
    start_y = N/4;
    end_y = start_y*3;
    for(int i = start_y; i < end_y; i++) {
        for(int j = start_x; j < end_x; j++) {
            int tmp = arr[i][j];
            arr[i][j] = arr[N-i-1][N-j-1];
            arr[N-i-1][N-j-1] = tmp;            
        }
    }

    return arr;
}

int main() {
    int N;
    cin >> N;
    if(N%4 != 0 || N < 4) return 0;

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