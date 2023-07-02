#include <iostream>
#include "calc.h"
#include "calc.cpp"
using namespace std;
int main()
{
    calc k;
    cout << k.add(float(5.5), float(2.2));
}