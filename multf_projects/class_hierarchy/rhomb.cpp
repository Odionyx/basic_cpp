#include "rhomb.h"

bool Rhomb::correct(void) {
    if((!Parallelogram::correct())||(c!=b)) return false;
    return true;
}
Rhomb::Rhomb(short int a, short int A, short int B)
    : Parallelogram (a,a,A,B) {
    this->shapeName = "Ромб";
}
Rhomb::~Rhomb(){}
