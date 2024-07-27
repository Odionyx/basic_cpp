#include "my_except.h"
#include <iostream>

const char *MyExcept::what() const noexcept {
    return (this->sErr[num].c_str());
}

MyExcept::MyExcept(const short int i) : num{i} {}

MyExcept::~MyExcept() {}
