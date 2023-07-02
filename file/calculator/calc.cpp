#include "calc.h"
#include <iostream>
using namespace std;
int calc::add(int a, int b)
{
    int sum = a + b;
    cout << "integer" << endl;
    return sum;
}
float calc::add(float a, float b)
{
    float sum = a + b;
    cout << "float" << endl;
    return sum;
}

calc::calc()
{
}

calc::~calc()
{
}