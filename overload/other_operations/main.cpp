#ifdef _WIN32
#include <windows.h>
#endif
#include <iostream>

#include "fraction.h"
using std::cout, std::cin, std::endl;


void print(){
    short int n{0},d{0},n2{0},d2{0};

    cout <<"Введите числитель дроби 1: ";
    cin >> n;
    cout <<"Введите знаменатель дроби 1: ";
    cin >> d;
    cout <<"Введите числитель дроби 2: ";
    cin >> n2;
    cout <<"Введите знаменатель дроби 2: ";
    cin >> d2;

    Fraction f1{n,d}, f2{n2,d2}, f3{n,d};
    cout <<f1.getNum()<<'/'<<f1.getDenom()<<' '<<'+'<<' '<<f2.getNum()<<'/'<<f2.getDenom()<<' '<<'='<<' ';
    f3 = f1+ f2;
        f3.printResult();
    cout <<f1.getNum()<<'/'<<f1.getDenom()<<' '<<'-'<<' '<<f2.getNum()<<'/'<<f2.getDenom()<<' '<<'='<<' ';
    f3 = f1- f2;
        f3.printResult();
    cout <<f1.getNum()<<'/'<<f1.getDenom()<<' '<<'*'<<' '<<f2.getNum()<<'/'<<f2.getDenom()<<' '<<'='<<' ';
    f3 = f1*f2;
        f3.printResult();
    cout <<f1.getNum()<<'/'<<f1.getDenom()<<' '<<'/'<<' '<<f2.getNum()<<'/'<<f2.getDenom()<<' '<<'='<<' ';
    f3 = f1/f2;
        f3.printResult();
    cout <<'+'<<'+'<<f1.getNum()<<'/'<<f1.getDenom()<<' '<<'*'<<' '<<f2.getNum()<<'/'<<f2.getDenom()<<' '<<'='<<' ';
    f3 = ++f1*f2;
        f3.printResult();
    cout << "Значение дроби 1 = "; f1.printResult();
    cout <<f1.getNum()<<'/'<<f1.getDenom()<<'-'<<'-'<<' '<<'*'<<' '<<f2.getNum()<<'/'<<f2.getDenom()<<' '<<'='<<' ';
    f3 = f1--*f2;
        f3.printResult();
    cout << "Значение дроби 1 = "; f1.printResult();
}


int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru_RU");
#ifdef _WIN32
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif
    print();
    return 0;
}
    // Thanks for the tutorial!
