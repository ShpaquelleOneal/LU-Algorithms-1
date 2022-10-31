/*
C1[6]. Given natural number N. Without using in-built power and/or root functions, calculate the first 5 perfect squares bigger or equal to N. Example. N = 20; answer: 25,36,49,64,81.
*/

#include <iostream>

using namespace std;

int main () {
    int d = 1;
    int n;
    cin >> n;
    while (d*d < n) d++;
    for (int i = 0; i < 5; i++) {
        cout << d*d << endl;
        d++;
    }


}
