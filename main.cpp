#include <iostream>
#include "calculator.h"

int main()
{
    Calculator calculator;

    double a = 10.0;
    double b = 10.0;

    std::cout << "a + b = " << calculator.Add(a, b) << std::endl;

    return 0;
}
