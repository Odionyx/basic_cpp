#ifndef MYEXCEPT_H
#define MYEXCEPT_H

#include <stdexcept>
#include <string>

class MyExcept: public std::exception {
public:
    const char* what() const noexcept final;
    MyExcept() = default;
    MyExcept(const short int i);
    ~MyExcept();
private:
    short int num{0};
    std::string sErr[6]{
        "\n",
        " Неправильное число сторон ",
        " Сумма углов не 180 ",
        " Сумма углов не 360 ",
        " Угол не равен 90 ",
        " Нарушено равенство "
    };
};

#endif // MYEXCEPT_H
