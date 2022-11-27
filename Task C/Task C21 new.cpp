/********************************
Edgars Spira, es22027

C21. Given natural numbers n and a(1), a(2), ... a(n).
Do not sort all numbers in array but find the third largest number from given a(1), a(2), ... a(n).

Program created: 25/11/2022
********************************/

#include <iostream>

using namespace std;

void third_largest (int n, int a[]) {

    /*Declare variables to track three largest numbers and set them to the lowest one in the array*/
    int lar1, lar2, lar3, lowval = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < lowval) lowval = a[i];
    }
    lar1 = lar2 = lar3 = lowval;

    /*Iterate through each number in the array to find those three largest*/
    for (int i = 0; i < n; i++) {
        if (a[i] > lar1) {
            lar3 = lar2;
            lar2 = lar1;
            lar1 = a[i];
        } else if (a[i] > lar2 && a[i] != lar1) {
            lar3 = lar2;
            lar2 = a[i];
        } else if (a[i] > lar3 && a[i] != lar2 && a[i] != lar1) lar3 = a[i];
    }

    /*Output to console only the third largest number*/
    if (lar2 == lar3) cout << "Third largest value does not exist." << endl;
    else cout << "Third largest number in the array is: " << lar3 << endl;

}

int main() {
    int end_prog;
    do { //code for continuous program iteration by asking user's input at the end of program
        /*Get input from the user for number of items in an array and items to fill the array. User's input is checked for "natural number only" for array size.*/
        int n;
        cout << "Enter natural number for array size (min value = 3): ";
        cin >> n;

        while (n <= 2) {
            cout << "Size of the array is negative or too small to return THIRD largest number." << endl;
            cout << "Enter the size of at least 3: ";
            cin >> n;
        }

        cout << "Enter " << n <<" numbers to fill the array: ";
        int a[n];
        for (int i = 0; i < n; i++) {
            int temp = 0;
            cin >> temp;
            a[i] = temp;
        }

        /*Execute the function*/
        third_largest(n, a);

        cout << endl;
        cout << "Continue program running (1) or quit application (0)?" << endl;
        cin >> end_prog;
    } while (end_prog == 1);
}
