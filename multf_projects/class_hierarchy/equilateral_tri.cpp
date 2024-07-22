#include "equilateral_tri.h"

bool EquilateralTri::correct(void) {
    if((!IsoscelesTri::correct())||(a!=b)||(C!=60)||(B!=C))
        return false;
    return true;
}
EquilateralTri::EquilateralTri (short int a, short int A)
    : IsoscelesTri (a,a,A,A){
    this->shapeName = "Равносторонний треугольник";
}
EquilateralTri::~EquilateralTri(){}
