// Check if string is symmetric

#include <iostream>

using namespace std;


int main() {
    char s[100];
    int n=0;
    char c;

    cin >> c;
    while (n < 100 && c != '.') {
        s[n] = c;
        n++;
        cin >> c;
    }

    int flag = 1;
    if (n % 2 != 0) {
        cout << "No, odd" << endl;
    } else {
        for (int i = 0; i < n/2; i++) {
            if (s[i] != s[n-i-1]) {
                flag =0;
                break;
            }
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


}
