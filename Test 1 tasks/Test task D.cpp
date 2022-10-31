#include <iostream>

using namespace std;

/*
D. Given natural numbers M and N.
Calculate the sum of powers of base 2 in range M..N.
Example. M=10, N=100; output = 112 (16+32+64).
*/

int main () {
    int m, n;
    cin >> m >> n;

    int curr_num = 2;
    int pow = 2;

    while (curr_num < n) {
        curr_num *= pow;
        if (curr_num >= m && curr_num <= n) cout << curr_num << endl;
    }

}
