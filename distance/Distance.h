#ifndef DISTANCE_H
#define DISTANCE_H

#pragma once

class Distance
{
public:
    Distance();
    Distance(int f, float i);
    Distance add_object(Distance d2);
    void print();
    void setdistance(int f, float i);
    int get_feet();
    float get_inches();

    ~Distance();

private:
    int feet;
    float inches;
};

#endif