/********************************
Edgars Spira, es22027

C21. Given natural numbers n and a(1), a(2), ... a(n).
Do not sort all numbers in array but find the third largest number from given a(1), a(2), ... a(n).

Program created: 23/11/2022
********************************/

#include <iostream>

using namespace std;

void third_largest (int n, int a[]) {
    /*Check if array has three values*/
    if (n < 3) {
        cout << "No third largest value because array size is less than 3...";
        return;
    }

    /*Declare variables to track three largest numbers*/
    int lar1, lar2, lar3;
    lar1 = lar2 = lar3 = a[0];

    /*Iterate through each number in the array to find those three largest*/
    for (int i = 0; i < n; i++) {
        if (a[i] > lar1) {
            lar3 = lar2;
            lar2 = lar1;
            lar1 = a[i];
        } else if (a[i] > lar2) {
            lar3 = lar2;
            lar2 = a[i];
        } else if (a[i] > lar3) lar3 = a[i];
    }
    /*Output to console only the third largest number*/
    cout << "Third largest number in the array is: " << lar3 << endl;
}

int main() {
    /*Get input from the user for number of items in an array and items to fill the array. User's input is checked for "natural number only" for array size.*/
    int n;
    cout << "Enter natural number for array size: ";
    cin >> n;
    while (n < 1) {
        cout << "Wrong input, try again with natural number: ";
        cin >> n;
    }

    cout << "Enter " << n <<" natural numbers to fill the array: ";
    int a[n];
    for (int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        a[i] = temp;
    }

    /*Execute the function*/
    third_largest(n, a);
}


