#include <iostream>

using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) a[i] = 0;

    int inp = 0;

    cout << "Enter 1. number: ";
    cin >> inp;

    a[0] = inp;
    cout << "Line: " << a[0] << endl;


    for (int i = 0; i < 10; i++) {
        cout << "Enter " << i + 1 << ". number: ";
        cin >> inp;

        for (int j = 1; j < 10; j++) {
            if (inp >= a[j]) {
                for (int g = 10; g > j; g--) {
                    a[g] = a[g-1];
                }
                a[j] = inp;
                break;
            } else a[i + 1] = inp;
        }

        cout << "Line: ";
        for (int h = 0; h < i; h++) cout << a[h] << " ";
        cout << endl;
    }



}
