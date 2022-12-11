// Check if string is symmetric

#include <iostream>

using namespace std;


int main() {
    int inp =0, n=0, flag=0;
    int a[20];

    for (int i = 0; i < 20; i++) {
        cout << "Enter " << i+1 << ". number ";
        cin >> inp;
        cout << "Line: ";
        if (i == 0) a[0] = inp;
        else {
            for(int j = 0; j < i; j++) {
                if (inp > a[j]) {
                    for (int h = 19; h>j; h--) {
                        a[h] = a[h-1];
                    }
                    a[j] = inp;
                    flag = 1;
                    break;
                }
            }
            if (!flag) a[i] = inp;
            flag = 0;
        }

        for (int k = 0; k < i+1; k++) {
            cout << a[k] << " ";
        }
        cout << endl;

    }




}
