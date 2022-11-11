#include "Z.hpp"

#include <memory>

Z::Z()
{
    var = 2;
}

void Z::doSomething()
{

}

void Z::setVar(int in_var)
{
    var = in_var;
}

int Z::getVar()
{
    return var;
}
