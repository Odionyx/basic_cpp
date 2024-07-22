#include "quadrangle.h"

bool Quadrangle::correct(void) {
    if((numSides!=4)||((A+B+C+D)!=360)) return false;
    return true;
}
void Quadrangle::getInfo(void) {
    std::cout << shapeName << ": " << std::endl;
    std::cout << (correct()?"Правильная":"Неправильная") << std::endl;
    std::cout << "Количество сторон: " << numSides << std::endl;
    std::cout << "Стороны: "<<"a="<< a <<" b="<< b <<" c="<< c <<" d="<< d << std::endl;
    std::cout << "Углы:"<<"\t A="<< A <<" B="<< B <<" C="<< C <<" D="<< D << std::endl;
    std::cout << std::endl;
    return;
}

Quadrangle::Quadrangle(short int a, short int b, short int c, short int d,
                       short int A, short int B, short int C, short int D)
    : Shape(4), a{a}, b{b}, c{c}, d{d}, A{A}, B{B}, C{C}, D{D} {
    this->shapeName = "Четырёхугольник";
}
Quadrangle::~Quadrangle(){}
