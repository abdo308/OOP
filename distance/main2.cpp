#include <iostream>
#include "Distance.h"
#include "Distance.cpp"
using namespace std;
int main()
{
    Distance k(3, 3.5);
    Distance a = k;
    a.print();
    //----------------
    k.setdistance(50, 60.5);
    Distance b(k);
    b.print();
}