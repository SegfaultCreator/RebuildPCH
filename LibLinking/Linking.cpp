#include "Linking.hpp"

#include <memory>
#include <iostream>

Z::Z()
{
    var = 2;
}

void Z::doSomething()
{
    std::cout << "Test" << std::endl;
}

void Z::setVar(int in_var)
{
    var = in_var;
}
