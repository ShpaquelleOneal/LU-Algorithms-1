#include <iostream>

using namespace std;

/*
B. For a given positive integer N, check out whether
it is not bigger than of 3 digits and has all the digits equal.
Examples #1. N = 99; answer = yes. Example #2. N = 12; answer: no. Example #3. N = 333; answer = yes.
Example #1. N = 4444; answer = no. Example #1. N = 7; answer = yes.
*/

int main () {
int n;
cin >> n;
int num_copy = abs(n);
int num_pow = 0;

while (num_copy > 0) {
    num_pow++;
    num_copy /= 10;
}

int glob_flag = 0;
int dig = n % 10;
for (int i = 0; i < num_pow; i ++) {
    if (n % 10 != dig) glob_flag = 1;
    n /= 10;
}

if (glob_flag == 0 && num_pow < 4) cout << "Yes";
else cout << "No";

}
