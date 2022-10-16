/********************************
Edgars Spira, es22027

B5. Given natural numbers m and n. Find all numbers in range [m,n]
the decimal notation of which is the right part of the decimal notation
of its square (e.g., 6 - square 36; 25 - square 625). Splitting into digits
should be carried out numerically. The solution should include a function
which returns a numbers which is obtained by taking last k digits from a given number
(e.g. last 3 digits of 123456 forms number 456).

Program created: 10/10/2022
********************************/

#include <iostream>

using namespace std;

int dig_return (int num) { //function that returns n number digits of variable x squared

    if (num % 10 == 0) { //numbers that divides by 10 with no remainder are skipped, they do not meet the criteria
        return 0;
    }

    int num_copy = num;
    int ten_pow = 0;
    while (num_copy > 0) //get the number of digits that must be returned
    {
        ten_pow++;
        num_copy /= 10;
    }

    int full_num = 0;
    int num_in_pow = num * num;
    for (int i = 0; i < ten_pow; i++) { //calculate exact digits that will be returned. Splitting digits using modulo algorithm
        if (full_num == 0){
            full_num += num_in_pow % 10;
        } else {
            int new_pow = num_in_pow % 10;
            for (int j = 0; j < i; j++){
                new_pow *= 10;
            }
            full_num = new_pow + full_num;
        }
        num_in_pow /= 10;
    }
    return full_num;
}

int main () {
    int end_prog;
    do { //code for continuous program iteration by asking user's input at the end of program

        cout << "Enter 2 numbers for desired range." << endl;
        int x,y; //declare variables that will be used as user's input to provide numbers range
        cout << "Enter first number: ";
        cin >> x;
        while (x < 1) { //provided check for natural number only for first input
            cout << "Enter natural number only: ";
            cin >> x;
        }

        cout << "Enter second number: ";
        cin >> y;
        while (y < x) { //provide check for second input, it should greater than or equals to first number, otherwise range doesn't make sense
            cout << "Enter natural number that is greater than or equals to the first number: ";
            cin >> y;
        }
        cout << endl;

        int flag = 0;
        for (x; x < y + 1; x++)//iterate through each number in inputted range
        {
            //cout << "For number: "<< x << ", last digits are: " << dig_return(x) << endl; //test
            if (x == dig_return(x)) {//if number meets logical criteria, print it out
                cout << x << " (squared is " << x * x << ")" << endl;
                flag = 1;
            }
        }
        if (flag == 0) cout << "No numbers that meet the criteria." << endl; //if not meeting the criteria, print out message

        cout << endl;
        cout << "Continue program running (1) or quit application (0)?" << endl;
        cin >> end_prog;
    } while (end_prog == 1);
}
