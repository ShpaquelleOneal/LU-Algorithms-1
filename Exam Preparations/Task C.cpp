#include <iostream>
using namespace std;

int diff (int *arr[], int x, int y) {
    int min = arr[0][0], max = arr[0][0];
    for(int i = 0; i< x; i++) {
        for (int j = 0; j< y; j++) {
            if (arr[i][j] > max) max = arr[i][j];
            if(arr [i][j] < min) min = arr[i][j];
        }
    }
    return max-min;
}


int main () {
    int x, y;
    cout << "enter x rows, y cols: ";
    cin >> x >> y;
    int** arr = new int*[x];
    for (int i = 0; i< x; i++) {
        arr[i] = new int[y];
    }
    for (int i = 0; i< x; i++) {
        for (int j = 0; j < y; j++) {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }
    cout <<  diff(arr, x, y);


    for (int i = 0; i<x;i++) {
        delete arr[i];
    }
    delete arr;
}
