#include "shape.h"
#include <iostream>

bool Shape::correct(void) {
    if(numSides!=0) return false;
    return true;
}

void Shape::getInfo(void) {
    std::cout << shapeName << ": " << std::endl;
    std::cout << (correct()?"Правильная":"Неправильная") << std::endl;
    std::cout << "Количество сторон: " << numSides << std::endl;
    std::cout << std::endl;
    return;
}

Shape::Shape() : numSides{0}, shapeName {"Фигура"} {}

Shape::Shape(short int numSides):   numSides{numSides},
                                    shapeName {"Фигура"} {}
Shape::~Shape() {/*std::cout<<"goodbye!\n";*/}
