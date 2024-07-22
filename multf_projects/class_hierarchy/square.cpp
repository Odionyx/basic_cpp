#include "square.h"

bool Square::correct(void) {
    if((!RectangleR::correct())||(c!=b)) return false;
    return true;
}
Square::Square(short int a): RectangleR (a,a){
    this->shapeName = "Квадрат";
}
Square::~Square(){}
