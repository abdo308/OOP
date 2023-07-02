#include "classrec.h"
#include "iostream"
using namespace std;
classrec::classrec() : length(50.7), width(70.3)
{
}
float classrec::getlength()
{
    return length;
}
float classrec::getwidth()
{
    return width;
}
void classrec::setlength(float l)
{
    length = l;
}
void classrec::setwidth(float w)
{
    width = w;
}
float classrec::area()
{
    return (length * width);
}
classrec::~classrec()
{
    cout << "good bye";
}