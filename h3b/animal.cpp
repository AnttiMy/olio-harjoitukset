#include "Animal.h"
#include <iostream>

void Animal::callOut() const {
    std::cout << "Elain aantelee" << std::endl;
}

Animal::~Animal() {
    std::cout << "elain tuhoutuu" << std::endl;
}
