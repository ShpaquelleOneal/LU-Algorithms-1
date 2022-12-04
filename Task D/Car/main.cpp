/**************************
Edgars Spira, es22027

D4. Create class "Car" with three numbers stored - amount of fuel in the tank, fuel consumption per 100 km, and optimal speed km/h. The following class methods should be created: (1) a constructor to initialize an object with given initial values, (2) destructor which should notify about deleting the object, (3) method "change" with 3 parameters which change the values by a certain amount (not replace), (4) method "calculate" – which calculates and prints the amount of kilometers remaining and the amount of time required for that (optimal speed assumed), (5) method "print", which prints the stored values.

Program created: 28/11/2022
**************************/

#include <iostream>
#include "car.h"

using namespace std;

int main() {

    car a(45, 7.5, 70);
    a.print();
    a.calculate();

    a.change(5, 2.5, -10);
    a.print();
    a.calculate();
}
/*
void car::print() {
    cout << fuel << "(l); " << consump << "(l/100km); " << opt_speed << "(km/h);" << endl;
}

//change method adds inputted values to the original values
void car::change(double a, double b, double c) {
    fuel += a;
    consump += b;
    opt_speed += c;
}

//calculates and prints out remaining kilometres and hours of driving
void car::calculate() {
    double kmrem = (fuel/consump) * 100;
    cout << "Remaining: " << kmrem << " km / " << kmrem / opt_speed << " hours of driving with current speed." << endl;
    cout << endl;
}

car::car(double f, double con, double speed) {
    fuel = f;
    consump = con;
    opt_speed = speed;
}

car::~car() {
    cout << "The object has been deleted..." << endl;
}*/
