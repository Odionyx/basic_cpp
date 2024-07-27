#include "quadrangle.h"
#include "my_except.h"

void Quadrangle::getInfo(void) {
    std::cout << shapeName <<' '<<'('
        << "стороны "<<' '<< a <<','<<' '<< b <<','<<' '<< c <<','<<' '<< d
        << "; углы"<<' '<< A <<','<<' '<< B <<','<<' '<< C <<','<<' '<< D
        <<") создан"<< std::endl;
    std::cout << std::endl;
    return;
}

Quadrangle::Quadrangle(short int a, short int b, short int c, short int d,
                       short int A, short int B, short int C, short int D) try
    : Shape(4), a{a}, b{b}, c{c}, d{d}, A{A}, B{B}, C{C}, D{D} {
    this->shapeName = "Четырёхугольник";
    if(numSides!=4) throw MyExcept(1);
    if((A+B+C+D)!= 360) throw MyExcept(3);
}
catch (const MyExcept& err) {
    std::cerr <<"Ошибка создания фигуры "<<__func__ <<'.'
              <<" Причина: "<< err.what() << std::endl;
}

Quadrangle::~Quadrangle(){}
