#ifndef CLASSREC_H
#define CLASSREC_H
#pragma once

class classrec
{
public:
    void setlength(float l);
    void setwidth(float w);
    float area();

    float getlength();
    float getwidth();
    classrec();
    ~classrec();

private:
    float length;
    float width;
};

#endif