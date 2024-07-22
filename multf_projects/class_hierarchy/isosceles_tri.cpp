#include "isosceles_tri.h"

bool IsoscelesTri::correct(void) {
    if((!Triangle::correct())||(a!=c)||(A!=C)) return false;
    return true;
}
IsoscelesTri::IsoscelesTri (short int a, short int b,
                            short int A, short int B)
                            : Triangle (a,b,a,A,B,A){
    this->shapeName = "Равнобедренный треугольник";
}
IsoscelesTri::~IsoscelesTri(){}
