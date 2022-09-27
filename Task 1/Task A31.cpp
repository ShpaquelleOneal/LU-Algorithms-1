/********************************
Edgars Spira, es22027

A31. Given two natural numbers.
Calculate difference of digit sum of both given numbers.
Splitting into digits should be carried out numerically.

Program created: 26/09/2022
********************************/

#include <iostream>

using namespace std;

int main () {
    int end_prog;
    do {//function for repeated use of program

        //display program purpose to the console for user
        cout << "Input 2 natural numbers. The program will calculate the difference of digit sum of both numbers." << endl;

        int num_1, num_2;
        cout << "Enter first number: ";
        cin >> num_1; //get first input from user
        while (num_1 <= 0) { //first var input check, only for natural numbers display ERROR message if input is wrong
            cout << "Wrong input. Natural numbers only: ";
            cin >> num_1;
        }

        cout << "Enter second number: ";
        cin >> num_2; //get second input from user
        while (num_2 <= 0) { //second var input check, only for natural numbers display ERROR message if input is wrong
            cout << "Wrong input. Natural numbers only: ";
            cin >> num_2;
        }

        //calculate sum of digits separately
        int sum_1 = 0, sum_2 = 0;
        while (num_1 > 0) {
            sum_1 += num_1 % 10; //using algorithm with modulo operator for calculations
            num_1 /= 10;
        }
        while (num_2 > 0) {
            sum_2 += num_2 % 10; //using algorithm with modulo operator for calculations
            num_2 /= 10;
        }

        //show sum of both digits to the user
        cout << endl << "Sum of digits from first number: " << sum_1 << endl;
        cout << "Sum of digits from second number: " << sum_2 << endl;
        cout << endl;
        //show their difference to the user
        cout << "Difference of digit sums of both given numbers is: " << sum_1 - sum_2 << endl;


        //ask user to repeat program or terminate it
        cout << endl;
        cout << "Continue program running (1) or quit application (0)?" << endl;
        cin >> end_prog;
    } while (end_prog == 1);
}
