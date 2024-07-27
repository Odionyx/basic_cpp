#pragma once
#include <iostream>

class Shape {
public:
    virtual void getInfo(void);
    virtual const std::string &name(void) const;
    Shape();
    Shape(short int numSides);
    virtual ~Shape();
protected:
    std::string shapeName{""};
    short int numSides {0};
};
