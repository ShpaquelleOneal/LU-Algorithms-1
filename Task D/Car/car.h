#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;


class car {
//private: by default
    double fuel; //Litres
    double consump; //Litres per 100 km
    double opt_speed; //Optimal speed km/h

public:
    void print();
    void change(double a, double b, double c);
    void calculate();

    car(double f, double con, double speed);
    ~car();
};

#endif //CAR_H
