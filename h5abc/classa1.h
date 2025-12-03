#pragma once
#include "classb.h"
#include <string>
using namespace std;
class classa1
{
private:
    classb objectb;
public:
    classa1(classb value);
    string getbinfo();
    void setbinfo(string value); };
