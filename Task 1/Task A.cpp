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
    do {
        //get input from user, check the input for natural numbers only
        int num_1, num_2;
        cout << "Enter first number: ";
        cin >> num_1;
        while (num_1 <= 0) {
            cout << "Wrong input. Natural numbers only: ";
            cin >> num_1;
        }

        cout << "Enter second number: ";
        cin >> num_2;
        while (num_2 <= 0) {
            cout << "Wrong input. Natural numbers only: ";
            cin >> num_2;
        }

        //calculate sum of digits separately
        int sum_1 = 0, sum_2 = 0;
        while (num_1 > 0) {
            sum_1 += num_1 % 10;
            num_1 /= 10;
        }
        while (num_2 > 0) {
            sum_2 += num_2 % 10;
            num_2 /= 10;
        }

        //show sum of both digits and their difference to the console
        cout << endl << "Sum of digits from first number: " << sum_1 << endl;
        cout << "Sum of digits from second number: " << sum_2 << endl;
        cout << endl;
        cout << "Difference of digit sums of both given numbers is: " << sum_1 - sum_2 << endl;


        //ask user to repeat program or terminate it
        cout << endl;
        cout << "Continue program running (1) or quit application (0)?" << endl;
        cin >> end_prog;
    } while (end_prog == 1);
}
