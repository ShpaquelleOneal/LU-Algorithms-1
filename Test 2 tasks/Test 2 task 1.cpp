/*
B[9]. Design a C++ function and provide the context how it is called:
Function with four parameters. Given 2 integer numbers (in first two parameters). Calculate 1) sum of last digits of the two numbers as the 3rd parameter, 2) minimum number of the first two as the 4th parameter, 3) square root of the biggest of first two as return value. Example. Given (first two parameters): 34, 56; Output to parameters (3rd and 4th): 10, 34; returns 7.48.
*/

#include <iostream>
#include <cmath>

using namespace std;

double calc (int a, int b, int &c, int &d) {
    c = (a % 10) + (b % 10);
    if (b > a) {
        d = a;
        return sqrt(b);
    } else {
        d = b;
        return sqrt(a);
    }
}

int main () {
    int c = 0;
    int d = 0;
    int a, b;
    cin >> a >> b;

    cout << calc(a, b, c, d);
    cout << a << " " << b << " " << c << " " << d << endl;


}
