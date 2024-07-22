#ifndef RIGHTANGLEDTRI_H
#define RIGHTANGLEDTRI_H

#include "triangle.h"
class RightAngledTri : public Triangle {
public:
    bool correct(void) override;
    RightAngledTri(short int a, short int b, short int c,
                   short int A, short int B);
    ~RightAngledTri();
};

#endif // RIGHTANGLEDTRI_H
