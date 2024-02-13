#include <iostream>

#include "sum.h"

using namespace std;

int main()
{
    int a;
    a = 10;

    int b;
    b = 20;

    cout << "Sum = " << sum(a, b) << endl;
}

int sum(int a, int b)
{
    int c;
    c = a + b;

    return c;
}