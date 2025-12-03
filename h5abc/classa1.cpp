#include "classa1.h"

classa1::classa1(classb value): objectb(value) {}
string classa1::getbinfo()
{
    return objectb.getinfo();}
void classa1::setbinfo(string value)
{
    objectb.setinfo(value);}
