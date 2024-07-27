#include "rhomb.h"
#include "my_except.h"

Rhomb::Rhomb(short int a, short int A, short int B) try
    : Parallelogram (a,a,A,B) {
    this->shapeName = "Ромб";
    if((c!=b)) throw MyExcept(5);
}
catch (const MyExcept& err) {
    std::cerr <<"Ошибка создания фигуры "<<__func__ <<'.'
              <<" Причина: "<< err.what() << std::endl;
}

Rhomb::~Rhomb(){}
