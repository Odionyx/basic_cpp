#include "rectangle.h"

bool RectangleR::correct(void) {
    if((!Parallelogram::correct())||(C!=90)||(C!=B)) return false;
    return true;
}
RectangleR::RectangleR(short int a, short int b)
    : Parallelogram (a,b,90,90){
    this->shapeName = "Прямоугольник";
}
RectangleR::~RectangleR(){}
