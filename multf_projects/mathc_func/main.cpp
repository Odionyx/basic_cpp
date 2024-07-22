#include <iostream>
#include <Windows.h>

#include "mathc_func.h"


int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru-RU");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a{0}; int b{0}; int c{0};
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout <<"Выберите операцию (1 - сложение, 2 вычитание, "
                "3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> c;
    switch (c) {
    case 1: std::cout << a << " + " << b << " = " <<      addition(a, b)<< std::endl;break;
    case 2: std::cout << a << " - " << b << " = " <<   subtraction(a, b)<< std::endl;break;
    case 3: std::cout << a << " * " << b << " = " <<multiplication(a, b)<< std::endl;break;
    case 5: std::cout << a << " в степени " << b << " = " <<degree(a, b)<< std::endl;break;
    case 4:
        if (b) { std::cout << a << " / " << b << " = " << division(a, b)<< std::endl;break;}
    default:std::cout << "Неверный ввод!" << std::endl; break;
    }
    return 0;
}
    // Thanks for the tutorial!
