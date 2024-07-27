#include "equilateral_tri.h"
#include "my_except.h"

EquilateralTri::EquilateralTri (short int a, short int A) try
    : IsoscelesTri (a,a,A,A){
    this->shapeName = "Равносторонний треугольник";
    if((a!=b)||(C!=60)||(B!=C)) { throw MyExcept(5);}
}
catch (const MyExcept& err) {
    std::cerr <<"Ошибка создания фигуры "<<__func__ <<'.'
              <<" Причина: "<< err.what() << std::endl;
}
EquilateralTri::~EquilateralTri(){}
