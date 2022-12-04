#include "car.h"

using namespace std;

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
}
