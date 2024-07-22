#pragma once
#include <iostream>

class Shape {
public:
    virtual bool correct(void);
    virtual void getInfo(void);
    Shape();
    virtual ~Shape();
protected:
    Shape(short int numSides);
    std::string shapeName{""};
    short int numSides {0};
};
