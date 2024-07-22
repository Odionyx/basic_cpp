#ifndef RHOMB_H
#define RHOMB_H

#include "parallelogram.h"
class Rhomb : public Parallelogram {
public:
    bool correct(void) override;
    Rhomb(short int a, short int A, short int B);
    ~Rhomb();
};

#endif // RHOMB_H
