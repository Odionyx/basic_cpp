#include "right_angled_tri.h"
#include "my_except.h"

RightAngledTri::RightAngledTri(short int a, short int b, short int c,
                               short int A, short int B) try
                               : Triangle (a,b,c,A,B,90) {
    this->shapeName = "Прямоугольный треугольник";
    if(C!=90) { throw MyExcept(4);};
}
catch (const MyExcept& err) {
    std::cerr <<"Ошибка создания фигуры "<<__func__ <<'.'
              <<" Причина: "<< err.what() << std::endl;
}

RightAngledTri::~RightAngledTri(){}
