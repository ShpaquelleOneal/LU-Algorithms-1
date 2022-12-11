//Bingo 6 from 64

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    int a[6];
    int flag = 0, secflag = 0;

    for (int i = 0; i <6; i++) a[i] = 0;

    for (int i = 0; i<6; i++) {
        while (!flag) {
            srand(time(0));
            int x = (rand() % 64) + 1;
            for (int j = 0; j<6; j++) {
                if (a[j] == x) secflag=1;
            }
            if (!secflag) {
                a[i] = x;
                flag = 1;
            } else {
                flag = 0;
                secflag = 0;
            }
        }
        flag = 0;
    }

    for (int i = 0; i< 6; i++) cout << a[i] << " ";
    cout << endl;
}
