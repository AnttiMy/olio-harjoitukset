#include <iostream>
#include <memory>
#include "Animal.h"
#include "Dog.h"

int main() {
    std::unique_ptr<Animal> animal(new Animal());
    animal->callOut();

    std::unique_ptr<Animal> dogAsAnimal(new Dog());
    dogAsAnimal->callOut();

    std::unique_ptr<Dog> dog(new Dog());
    dog->callOut();

    return 0;
}
