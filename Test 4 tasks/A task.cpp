#include <iostream>

using namespace std;

int main() {

    int aa[3][3] = {{-1,-22,-1},{-1,-7,-6},{-1,-40,-5}};
    int col = 1, bigsum = 0;

    for (int i = 0; i < 3; i++) {
        bigsum += aa[i][0];
    }

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j<3; j++) {
            sum += aa[j][i];
        }
        if (sum > bigsum) {
            col = i+1;
            bigsum = sum;
        }
    }
    cout << col;
}
