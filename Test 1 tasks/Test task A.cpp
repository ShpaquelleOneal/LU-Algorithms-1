#include <iostream>

using namespace std;

/*
A. Given integer number N. Calculate the category this number belongs to:
(A) 2-digit with both digits equal,
(B) 2-digit ending with 0,
(C) other.
Example #1. N = 99; output = A. Example #2. N = -90; output: B.
Example #3. N = 12; output: C. Example #4. N = 123; output: C.
*/

int main () {
    int n;
    cin >> n;

    int num_pow = 0;
    int num_copy = abs(n);
    while (num_copy > 0) {
        num_pow++;
        num_copy /= 10;
    }

    if (num_pow == 2 && n % 10 == (n/10) % 10) cout << 'A';
    else if (num_pow == 2 && n % 10 == 0) cout << 'B';
    else cout << 'C';







}
