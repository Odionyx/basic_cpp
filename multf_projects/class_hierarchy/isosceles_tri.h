#ifndef ISOSCELESTRI_H
#define ISOSCELESTRI_H

#include "triangle.h"
class IsoscelesTri : public Triangle {
public:
    bool correct(void) override;
    IsoscelesTri (short int a, short int b, short int A, short int B);

    ~IsoscelesTri();
};

#endif // ISOSCELESTRI_H
