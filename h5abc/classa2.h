#pragma once
#include "classb.h"
#include <string>
using namespace std;

class classa2
{
private:
    classb &refb;
public:
    classa2(classb &value);
    string getbinfo();
    void setbinfo(string value);};
