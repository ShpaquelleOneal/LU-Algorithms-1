#include "car.h"
#include <iostream>
#include <cmath>

using namespace std;

void car::print() {
    cout << fuel << "(l); " << consump << "(l/100km); " << opt_speed << "(km/h);" << endl;
}

//change method adds inputted values to the original values
//restrict negative values for variables (not for input)
//use print() after change method to display changes
void car::change(double a, double b, double c) {
    if(fuel + a >= 0) fuel += a;
    else fuel = 0;

    if(consump + b >= 0) consump += b;
    else consump = 0;

    if(opt_speed + c >= 0) opt_speed += c;
    else opt_speed = 0;
    car::print();
}

//calculates and prints out remaining kilometres and hours of driving rounded to 2 decimal places
void car::calculate() {
    if (consump > 0 && opt_speed > 0) {
        double kmrem = round((fuel/consump) * 100 * 100) / 100;
        cout << "Remaining: " << kmrem << " km / " << round(kmrem / opt_speed * 100) / 100 << " hours of driving with current speed." << endl;
        cout << endl;
    } else {
        cout << "Calculations impossible due to invalid data..." << endl;
        cout << "Consumption or/and optimal speed values are < or = to 0..." << endl;
        cout << endl;
    }

}

car::car(double f, double con, double speed) {
    //validation for negative inputs, these variables can't be negative in real world
    //if these values were inputted, then set them to 0
    if(f < 0) fuel = 0;
    else fuel = f;

    if(con < 0) consump = 0;
    else consump = con;

    if(speed < 0) opt_speed = 0;
    else opt_speed = speed;
}

car::~car() {
    cout << "The car object has been deleted..." << endl;
    cout << endl;
}
