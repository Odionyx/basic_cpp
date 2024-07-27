#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape {
public:
    void getInfo(void) final;

    Triangle (short int a, short int b, short int c,
              short int A, short int B, short int C);
    ~Triangle();
protected:
    short int a{0};
    short int A{0};
    short int b{0};
    short int B{0};
    short int c{0};
    short int C{0};
};
#endif // TRIANGLE_H
