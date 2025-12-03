#include "classa2.h"

classa2::classa2(classb &value) : refb(value)
{}
string classa2::getbinfo()
{
    return refb.getinfo();}
void classa2::setbinfo(string value)
{
    refb.setinfo(value);}
