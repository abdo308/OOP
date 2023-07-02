#ifndef DISTANCE_H
#define DISTANCE_H

#pragma once

class Distance
{
public:
    Distance();
    Distance(int f, float i);

    void print();
    void setdistance(int f, float i);
    ~Distance();

private:
    int feet;
    float inches;
};

#endif