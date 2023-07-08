#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance()
{
    feet = 0;
    inches = 0.0;
}
Distance::Distance(int f, float i) : feet(f), inches(i)
{
}
void Distance::print()
{
    cout << feet << endl;
    cout << inches << endl;
}
void Distance::setdistance(int f, float i)
{
    feet = f;
    inches = i;
}
Distance Distance::add_object(Distance d2)
{
    Distance res;
    res.feet = feet + d2.feet;
    res.inches = inches + d2.inches;
    return res;
}
int Distance::get_feet()
{
    return feet;
}
float Distance::get_inches()
{
    return inches;
}
Distance::~Distance()
{
}