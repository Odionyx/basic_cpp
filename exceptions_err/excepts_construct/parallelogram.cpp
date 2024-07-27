#include "parallelogram.h"
#include "my_except.h"

Parallelogram::Parallelogram(short int a, short int b, short int A, short int B) try
    : Quadrangle (a,b,a,b,A,B,A,B){
    this->shapeName = "Параллелограмм";
    if((a!=c)||(b!=d)||(A!=C)||(B!=D)) throw MyExcept(5);
}
catch (const MyExcept& err) {
    std::cerr <<"Ошибка создания фигуры "<<__func__ <<'.'
              <<" Причина: "<< err.what() << std::endl;
}

Parallelogram::~Parallelogram(){}
