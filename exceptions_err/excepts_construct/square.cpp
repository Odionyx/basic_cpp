#include "square.h"
#include "my_except.h"

Square::Square(short int a) try : RectangleR (a,a){
    this->shapeName = "Квадрат";
    if(c!=b) throw MyExcept(5);
}
catch (const MyExcept& err) {
    std::cerr <<"Ошибка создания фигуры "<<__func__ <<'.'
              <<" Причина: "<< err.what() << std::endl;
}

Square::~Square(){}
