#include <iostream>
using namespace std;

int num (int n) {
    int cnt = 0;
    while (n > 0) {
        if (n%10 == 1) cnt++;
        n/=10;
    }
    return cnt;
}

int calculate (int a, int b, int c) {


    int an = num(a);
    //cout << an << endl;
    int bn = num(b);
    //cout << bn << endl;
    int cn = num(c);
    //cout << cn << endl;

    if (an > bn && an > cn) return a;
    else if (bn > an && bn > cn) return b;
    else return c;
}


int main () {
    cout << calculate(110, 111, 110);


}
