#include <iostream>
#include "math.h"
#include "calc.h"

using namespace std;

float c;

float sum(float a, float b)
{
    c = a + b;
    return "%.2f", c;
}

float sub(float a, float b)
{
    c = a - b;
    return "%.2f", c;
}

float mult(float a, float b)
{
    c = a * b;
    return "%.2f", c;
}

float div(float a, float b)
{
    c = a / b;
    return "%.2f", c;
}

float sqr(float a)
{
    c = a * a;
    return "%.2f", c;
}

float cube(float a)
{
    c = a * a * a;
    return "%.2f", c;
}
