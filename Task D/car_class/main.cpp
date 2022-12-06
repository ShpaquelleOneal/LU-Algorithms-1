/**************************
Edgars Spira, es22027

D4. Create class "Car" with three numbers stored - amount of fuel in the tank, fuel consumption per 100 km, and optimal speed km/h. The following class methods should be created: (1) a constructor to initialize an object with given initial values, (2) destructor which should notify about deleting the object, (3) method "change" with 3 parameters which change the values by a certain amount (not replace), (4) method "calculate" – which calculates and prints the amount of kilometers remaining and the amount of time required for that (optimal speed assumed), (5) method "print", which prints the stored values.

Program created: 28/11/2022
**************************/

#include <iostream>
#include "car.h"


using namespace std;

int main() {
    car a(45, 7.49, 70);
    a.print();
    a.calculate();
    a.change(5, 2.5, -10);
    a.calculate();

    car a1(-100, -2.99, 25);
    a1.print();
    a1.change(0, 10, 1);
    a1.calculate();

    car a2(-100, -2.99, 25);
    a2.print();
    a2.change(100, 10, -30);
    a2.calculate();
}
