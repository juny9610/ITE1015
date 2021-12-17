#include "minmax.h"

using namespace std;

int main(int argc, char** argv) {
    int len = argc-1;
    int* arr = new int[len];

    for(int i = 0; i < len; i++) arr[i] = atoi(argv[i+1]);
    int min = arr[0];
    int max = arr[0];

    getMinMax(arr, len, min, max);
    cout << "min: " << min << endl << "max: " << max << endl;

    delete[] arr;

    return 0;
}