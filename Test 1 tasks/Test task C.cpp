#include <iostream>

using namespace std;

/*
C. Given two integer values M and N.
Calculate, how many numbers are there in range M..N, ones which the sum of last two digits being 10.
Example. M=80, N=130; output = 4 (because 82,91,119,128).
*/

int main() {
    int m, n;
    cin >> m >> n;
    for (m; m < n + 1; m++) {
        int sum = 0;
        int num_copy = abs(m);
        for (int i = 0; i < 2; i++) {
            sum += num_copy % 10;
            num_copy /= 10;
        }
        if (sum == 10) cout << m << endl;
    }

}
