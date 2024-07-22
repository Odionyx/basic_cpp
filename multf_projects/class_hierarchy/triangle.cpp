#include "triangle.h"
//#include <iostream>

bool Triangle::correct(void) {
    if((numSides!=3)||((A+B+C)!=180)) return false;
    return true;
}
void Triangle::getInfo(void) {
    std::cout << shapeName << ": " << std::endl;
    std::cout << (correct()?"Правильная":"Неправильная") << std::endl;
    std::cout << "Количество сторон: " << numSides << std::endl;
    std::cout << "Стороны: "<<"a="<< a <<" b="<< b <<" c="<< c << std::endl;
    std::cout << "Углы:"<<"\t A="<< A <<" B="<< B <<" C="<< C << std::endl;
    std::cout << std::endl;
    return;
}

Triangle::Triangle (short int a, short int b, short int c,
                    short int A, short int B, short int C)
            : Shape(3), a{a}, b{b}, c{c}, A{A}, B{B}, C{C} {
    this->shapeName = "Треугольник";
}
Triangle::~Triangle(){}
