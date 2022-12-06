#ifndef CAR_H
#define CAR_H

class car {
//private: by default
    double fuel; //Litres
    double consump; //Litres per 100 km
    double opt_speed; //Optimal speed km/h

public:
    void print();
    void change(double, double, double);
    void calculate();

    car(double, double, double);
    ~car();
};

#endif //CAR_H
