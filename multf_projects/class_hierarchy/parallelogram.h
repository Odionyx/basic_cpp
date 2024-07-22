#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "quadrangle.h"
class Parallelogram : public Quadrangle {
public:
    bool correct(void) override;
    Parallelogram(short int a, short int b, short int A, short int B);
    ~Parallelogram();
};

#endif // PARALLELOGRAM_H
