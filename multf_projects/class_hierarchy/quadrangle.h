#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include "shape.h"
class Quadrangle : public Shape {
public:
    bool correct(void) override;
    void getInfo(void) final;

    Quadrangle(short int a, short int b, short int c, short int d,
               short int A, short int B, short int C, short int D);
    ~Quadrangle();
protected:
    short int a{0};
    short int A{0};
    short int b{0};
    short int B{0};
    short int c{0};
    short int C{0};
    short int d{0};
    short int D{0};
};

#endif // QUADRANGLE_H
