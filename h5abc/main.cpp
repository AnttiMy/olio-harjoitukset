#include <iostream>
#include "classa1.h"
#include "classa2.h"
#include "classb.h"
using namespace std;

int main()
{
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointera = &a;
    cout << "pointterin osoittama osoite on: " << pointera << endl;
    cout << "pointterin osoittaman muistipaikan arvo on: " << *pointera << endl;

    int &refa = a;
    cout << "refa osoittaa osoitteeseen on: " << &refa << endl;
    cout << "refa:n osoittaman muistipaikan arvo on: " << refa << endl;

    int b = 6;
    pointera = &b; // pointer voidaan uudelleen osoittaa
    cout << "pointera nyt osoittaa osoitteeseen: " << pointera << " ja arvo on: " << *pointera << endl;
    cout << endl;
    classb objb;
    objb.setinfo("olion b asettama info");

    classa1 obja1(objb);
    obja1.setbinfo("olion obja1 asettama info");
    cout << "objb: " << objb.getinfo() << endl;
    cout << "obja1: " << obja1.getbinfo() << endl;

    cout << endl;
    classb &refb = objb;
    classa2 obja2(refb);
    obja2.setbinfo("olion a2 asettama info");

    cout << "objb: " << objb.getinfo() << endl;
    cout << "obja2: " << obja2.getbinfo() << endl;
    return 0;
}
