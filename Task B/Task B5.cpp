/********************************
Edgars Spira, es22027

B5. Given natural numbers m and n. Find all numbers in range [m,n]
the decimal notation of which is the right part of the decimal notation
of its square (e.g., 6 - square 36; 25 - square 625). Splitting into digits
should be carried out numerically. The solution should include a function
which returns a numbers which is obtained by taking last k digits from a given number
(e.g. last 3 digits of 123456 forms number 456).

Program created: 05/10/2022
********************************/


#include <iostream>
using namespace std;

int main () {
    int end_prog;
    do {
        int n, m;
        cout << "Please input first number: ";
        cin >> n;
        cout << "Please input second number: ";
        cin >> m;
        cout << endl;

        for (; n < m + 1; n++) {
            cout << n << "(square is " << n*n << ")" << endl;
        }


















        cout << endl;
        cout << "Continue program running (1) or quit application (0)?" << endl;
        cin >> end_prog;
    } while (end_prog == 1);
}
