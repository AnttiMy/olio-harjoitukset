#include <iostream>
#include <string>

class Chef {
protected:
    std::string name;

public:
    Chef(const std::string& name) : name(name) {
        std::cout << "Chef constructor called for" << name << std::endl;
    }

    virtual ~Chef() {
        std::cout << "Chef destructor called for " << name << std::endl;
    }

    void makeSalad() {
        std::cout << name << " makes a salad" << std::endl;
    }

    void makeSoup() {
        std::cout << name << " makes soup" << std::endl;
    }
};
class ItalianChef : public Chef {
public:
    ItalianChef(const std::string& name) : Chef(name) {
        std::cout << "ItalianChef constructor called for" << name << std::endl;
    }

    ~ItalianChef() {
        std::cout << "ItalianChef destructor called for" << name << std::endl;
    }

    void makePasta() {
        std::cout << name << " makes pasta" << std::endl;
    }

    std::string getName() {
        return name;
    }
};
int main() {
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    std::cout << std::endl;
    ItalianChef italianChef1("Anthony Bourdain");
    italianChef1.makeSalad();
    italianChef1.makeSoup();
    italianChef1.makePasta();
    std::cout << "Italian chef's name is " << italianChef1.getName() << std::endl;
    std::cout << "Press Enter to exit";
    std::cin.get();
    return 0;
}
