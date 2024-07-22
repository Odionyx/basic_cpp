#include "parallelogram.h"

bool Parallelogram::correct(void) {
    if((!Quadrangle::correct())||(a!=c)||(b!=d)||(A!=C)||(B!=D)) return false;
    return true;
}
Parallelogram::Parallelogram(short int a, short int b, short int A, short int B)
    : Quadrangle (a,b,a,b,A,B,A,B){
    this->shapeName = "Параллелограмм";
}
Parallelogram::~Parallelogram(){}
