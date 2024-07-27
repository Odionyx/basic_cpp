#include "rectangle.h"
#include "my_except.h"

RectangleR::RectangleR(short int a, short int b) try
    : Parallelogram (a,b,90,90){
    this->shapeName = "Прямоугольник";
    if(C!=90) throw MyExcept(4);
    if(C!=B) throw MyExcept(5);
}
catch (const MyExcept& err) {
    std::cerr <<"Ошибка создания фигуры "<<__func__ <<'.'
              <<" Причина: "<< err.what() << std::endl;
}

RectangleR::~RectangleR(){}
