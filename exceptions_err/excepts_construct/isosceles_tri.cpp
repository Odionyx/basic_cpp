#include "isosceles_tri.h"
#include "my_except.h"

IsoscelesTri::IsoscelesTri (short int a, short int b,
                            short int A, short int B) try
                            : Triangle (a,b,a,A,B,A){
    this->shapeName = "Равнобедренный треугольник";
    if((a!=c)||(A!=C)) { throw MyExcept(5);}
}
catch (const MyExcept& err) {
    std::cerr <<"Ошибка создания фигуры "<<__func__ <<'.'
              <<" Причина: "<< err.what() << std::endl;
}

IsoscelesTri::~IsoscelesTri(){}
