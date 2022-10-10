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
/*
int dig_ret (int num) { //25
    int num_pow = num * num; // 625
    int digit = (num*num)%10; //625%10 = 5

    int full_num = digit;

    while (num_pow > 9) {
        full_num*=10;
        full_num+=digit;
        num_pow/=10;
    }
    return full_num;
}*/
int shuffle (int fir, int sec) {

}

int dig_return (int num) {//25
    int num_copy = num;
    int ten_pow = 0;

    while (num_copy > 0)
    {
        ten_pow++;
        num_copy /= 10;
    }

    int full_num = 0;
    int fir_dig = 0;
    int sec_dig = 0;
    int num_in_pow = num * num;

    int temp_var = 0;

    for (int i = 0; i < ten_pow; i++) {

        fir_dig = num_in_pow % 10;
        if (full_num * 10 > 10) {
            temp_var = full_num % 10;
            full_num = ((num_in_pow % 10) * 10) + temp_var;


        } else {
            full_num += fir_dig;
        }
        sec_dig = num_in_pow % 10;
        num_in_pow /= 10;
    }
    return full_num;
}


int main () {
    int end_prog;
    do {



        int x,y;
        cout<<"Enter first number: ";
        cin>>x;
        while (x<1) {
            cout<<"Enter natural number only: ";
            cin>>x;
        }

        cout<<"Enter second number: ";
        cin>>y;
        while (y<1) {
            cout<<"Enter natural number only: ";
            cin>>y;
        }

        cout<<endl;

        for (x; x < y+1; x++)
        {
            if(x == dig_return(x)) {
                cout<<x<<" (square is "<<x*x<<")"<<endl;
            }
        }


        cout << endl;
        cout << "Continue program running (1) or quit application (0)?" << endl;
        cin >> end_prog;
    } while (end_prog == 1);
}
