/*
C2[9]. Without using in-built power and/or root functions, calculate the first 5 perfect cubes bigger or equal to N. Example #1. N=8; answer = 8,27,64,125,216. Example #2. N=-50; answer = -27,-8,-1,0,1.
*/

#include <iostream>

using namespace std;


int main() {
    int d = 0;
    int n;

    cin >> n;
    if (n >= 0) {
        while (d*d*d < n) d++;
        for (int i = 0; i < 5; i++) {
            cout << d*d*d << endl;
            d++;
        }
    } else {
        while (d*d*d > n) d--;
        d++;
        for (int i = 0; i < 5; i++) {
            cout << d*d*d << endl;
            d++;
        }
    }



}
