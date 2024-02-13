#include <iostream>
#include "calc.h"
#include "func.cpp"

using namespace std;

int main()
{
    float a;
    a = 10;

    float b;
    b = 5;

    cout << "a is " << a << "; b is " << b << endl;
    cout << "Sum = " << sum(a, b) << endl;
    cout << "Sub = " << sub(a, b) << endl;
    cout << "Mult = " << mult(a, b) << endl;
    cout << "Div = " << div(a, b) << endl;
}
