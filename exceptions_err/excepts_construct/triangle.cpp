#include "triangle.h"
#include "my_except.h"

void Triangle::getInfo(void) {
    std::cout << shapeName <<' '<<'('
        << "стороны "<<' '<< a <<','<<' '<< b <<','<<' '<< c
        << "; углы"<<' '<< A <<','<<' '<< B <<','<<' '<< C
        <<") создан"<< std::endl;
    std::cout << std::endl;
    return;
}

Triangle::Triangle (short int a, short int b, short int c,
                    short int A, short int B, short int C) try
            : Shape(3), a{a}, b{b}, c{c}, A{A}, B{B}, C{C} {
    this->shapeName = "Треугольник";
    if(numSides!=3) { throw MyExcept(1);}
    if ((A+B+C)!=180) { throw MyExcept(2);}
}
catch (const MyExcept& err) {
    std::cerr <<"Ошибка создания фигуры "<<__func__ <<'.'
              <<" Причина: "<< err.what() << std::endl;
}

Triangle::~Triangle(){}
