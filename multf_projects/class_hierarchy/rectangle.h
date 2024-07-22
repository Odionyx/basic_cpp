#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "parallelogram.h"
class RectangleR : public Parallelogram {
public:
    bool correct(void) override;
    RectangleR(short int a, short int b);
    ~RectangleR();
};

#endif // RECTANGLE_H
