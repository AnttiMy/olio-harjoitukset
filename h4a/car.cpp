#include <iostream>
#include "Car.h"

Car::Car() : brand(""), model("") {}

Car::Car(string b, string m) : brand(b), model(m) {}

void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
    objWheel1.setSize(17);
    objWheel2.setSize(17);
    objWheel3.setSize(17);
    objWheel4.setSize(17);

    objWheel1.setType("kesarengas");
        objWheel2.setType("kesarengas");
        objWheel3.setType("kesarengas");
        objWheel4.setType("kesarengas");
}

string Car::getModel() const {
    return model;
}

void Car::setModel(string m) {
    model = m;
}

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(string b) {
    brand = b;
}

void Car::printDetails() const {
    cout << "Car brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Engine horsepower: " << objEngine.getHorsepower() << endl;
    cout << "Engine displacement: " << objEngine.getDisplacement() << " L" << endl;

    cout << "Wheels:" << endl;
    cout << "  Wheel 1 -> size: " << objWheel1.getSize() << ", type: " << objWheel1.getType() << endl;
    cout << "  Wheel 2 -> size: " << objWheel2.getSize() << ", type: " << objWheel2.getType() << endl;
    cout << "  Wheel 3 -> size: " << objWheel3.getSize() << ", type: " << objWheel3.getType() << endl;
    cout << "  Wheel 4 -> size: " << objWheel4.getSize() << ", type: " << objWheel4.getType() << endl;
}
