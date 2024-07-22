#ifndef EQUILATERALTRI_H
#define EQUILATERALTRI_H

#include "isosceles_tri.h"
class EquilateralTri : public IsoscelesTri {
public:
    bool correct(void) override;
    EquilateralTri (short int a, short int A);
    ~EquilateralTri();
};

#endif // EQUILATERALTRI_H
