#include "shape.h"
#include "my_except.h"
#include <iostream>

const std::string& Shape::name() const { return shapeName;}

void Shape::getInfo(void) {
    std::cout << shapeName <<' '<<'('<< "сторон "
              << numSides<<") создан"<< std::endl;
    std::cout << std::endl;
}

Shape::Shape() try: numSides{0}, shapeName {"Фигура"} {
    if(numSides) throw MyExcept(1);
}

catch (const std::exception& err) {
    std::cerr <<"Ошибка создания фигуры "<<__func__ <<'.'
              <<" Причина: "<< err.what() << std::endl;
}

Shape::Shape(short int numSides) : numSides{numSides},
                                    shapeName {"Фигура"} {}

Shape::~Shape() {/*std::cout<<"goodbye!\n";*/}
