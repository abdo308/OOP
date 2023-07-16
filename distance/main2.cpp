#include <iostream>
#include "Distance.h"
#include "Distance.cpp"
using namespace std;
int main()
{
    Distance k(2, 3.5);
    Distance o;
    //----------------
    k.setdistance(20, 560.3);
    o.setdistance(30, 900.3);
    // how to get an object as an argument
    Distance d3 = k + o;
    cout << d3.get_feet() << endl;
    cout << d3.get_inches();
}