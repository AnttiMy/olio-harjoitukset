#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"
using namespace std;

class Car {
private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;
    string model;
    string brand;

public:
    Car();
    Car(string b, string m);

    void setEngine();
    void setWheels();

    string getModel() const;
    void setModel(string m);

    string getBrand() const;
    void setBrand(string b);

    void printDetails() const;
};

#endif
