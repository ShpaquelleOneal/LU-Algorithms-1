#include <iostream>

using namespace std;

int main () {
    char c[100];
    int flag = 1, l = 0;
    char t;

    cin >> t;
    while (t != '.' && l < 100) {
        c[l] = t;
        l++;
        cout << l << endl;
        cin >> t;
    }

    for (int i = 0; i < (l / 2); i++) {
        if (c[i] != c[l - 1 - i]) flag = 0;
    }

    if (flag) cout << "symmetric" << endl;
    else cout << "not symmetric" << endl;
}
