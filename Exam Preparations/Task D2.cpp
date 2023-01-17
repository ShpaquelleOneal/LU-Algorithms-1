#include <iostream>
using namespace std;

void digits_descending (char s[]) {
    int end = 0, i = 0, repeat = 0;
    while (!end) {
        repeat = 0;
        if (s[i] == 0) {
            end = 1;
            break;
        }

        if (s[i+1] != 0) {
            if (s[i] >= '0' && s[i] <= '9' && s[i+1] >= '0' && s[i+1] <= '9') {
                if (s[i+1] > s[i]) {
                    int m = i, end_1 = 0;
                    while (!end_1) {
                        if (s[m+1] == 0) {
                            s[m+1] = 0;
                            break;
                        }
                        s[m] = s[m+1];
                        m++;
                        repeat = 1;
                    }
                }
            }
        }

        if(!repeat) i++;
    }

}


int main (){
    char s[5];
    for (int i = 0; i < 5; i++) {
        char temp;
        cin >> temp;
        s[i] = temp;
    }
    digits_descending(s);
    int k = 0;
    while (s[k] != 0) {
        cout << s[k];
        k++;
    }
}
