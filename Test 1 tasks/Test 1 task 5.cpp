#include <iostream>
using namespace std;

//not completed

int main () {
    int n = 0;
    int sum = 0;

    cin >> n;
    while (n != '.') {
            cout << int(n) << endl;
        if (int(n) < 10) {
            sum += n;
        }
        cin >> n;
    }
    cout << sum << " " << sum*sum << endl;

}
