#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"
class Square : public RectangleR {
public:
    bool correct(void) override;
    Square(short int a);
    ~Square();
};

#endif // SQUARE_H
