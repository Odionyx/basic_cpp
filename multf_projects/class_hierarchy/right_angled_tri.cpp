#include "right_angled_tri.h"

bool RightAngledTri::correct(void) {
    if((!Triangle::correct())||(C!=90)) return false;
    return true;
}
RightAngledTri::RightAngledTri(short int a, short int b, short int c,
                               short int A, short int B)
                               : Triangle (a,b,c,A,B,90) {
    this->shapeName = "Прямоугольный треугольник";
}
RightAngledTri::~RightAngledTri(){}
