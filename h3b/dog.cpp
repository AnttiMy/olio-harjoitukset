#include "Dog.h"
#include <iostream>

void Dog::callOut() const {
    std::cout << "Koira haukkuu" << std::endl;
}

Dog::~Dog() {
    std::cout << "Koira tuhoutuu" << std::endl;
}
