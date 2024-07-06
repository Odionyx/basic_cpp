#pragma once

#include <iostream>
#include <limits>       //std::numeric_limits<std::streamsize>::max()
#include <Windows.h>    //SetConsoleCP(CP_UTF8);


class Calculator {
    double dNum1 = 0.0;
    double dNum2 = 0.0;
//    int count = 0;
public:
    Calculator() { /*count++; std::cout << "Создаём класс " << count << std::endl;*/};
    ~Calculator() { /*std::cout << "Уничтожаем класс " << count << std::endl; count--;*/};
    double add(double dNum1, double dNum2) {
        return (dNum1 + dNum2);
    }
    double multiply(double dNum1, double dNum2) {
        return (dNum1 * dNum2);
    }
    double subtract_1_2(double dNum1, double dNum2) {
        return (dNum1 - dNum2);
    }
    double subtract_2_1(double dNum1, double dNum2) {
        return (dNum2 - dNum1);
    }
    double divide_1_2(double dNum1, double dNum2) {
        return (dNum1 / dNum2);
    }
    double divide_2_1(double dNum1, double dNum2) {
        return (dNum2 / dNum1);
    }
    bool set_num1(const double& dNum1) {
        if (static_cast <bool>(dNum1)) {
            this -> dNum1 = dNum1;
            return true;
        } else { return false;}
    }
    bool set_num2(const double& dNum2) {
        if (static_cast <bool>(dNum2)) {
            this -> dNum2 = dNum2;
            return true;
        } else { return false;}
    }
};

    //функция безопасного ввода int, float, double
void inputD(double& arg, std::string message, std::string message_error) {
    double _buffer;
    {
            //выполнение ввода до тех пор, пока будут ошибки
        while (true)
        {
                //выводим наше сообщение, вводим что-то с клавиатуры
            std::cout << message;
            std::cin >> _buffer;
                // проверяем и очищаем поток от мусора, выводим сообщение об ошибке
            if ((std::cin.fail() || std::cin.bad()) || (_buffer == 0)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << message_error << std::endl;
            }
            else break; //завершаем ввод если ошибок нет
        }
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    arg = _buffer;    //очищаем поток от мусора, возвращаем безопасное значение
    return;
}

    //функция вывод результата
void outResult(const bool &b, const char &ch, const double &d)
{
    std::cout<<"num"<<(b ? "1" : "2")<<" "<< ch <<" num"<<(b ? "2" : "1")<<" = "<< d << std::endl;
    return;
}

    //функция калькулятор
void calc( void) {
    double dNum1 = 0.0;
    double dNum2 = 0.0;
    std::string strBadInput {"Неправильный ввод!"};

    Calculator calc {};

    while (true) {
        inputD(dNum1, "Введите num1: ", strBadInput);
        inputD(dNum2, "Введите num2: ", strBadInput);

        if ((calc.set_num1(dNum1)) && (calc.set_num2(dNum2))) {
            outResult(true,  '+', calc.add           (dNum1, dNum2));
            outResult(true,  '-', calc.subtract_1_2  (dNum1, dNum2));
            outResult(false, '-', calc.subtract_2_1  (dNum1, dNum2));
            outResult(true,  '*', calc.multiply      (dNum1, dNum2));
            outResult(true,  '/', calc.divide_1_2    (dNum1, dNum2));
            outResult(false, '/', calc.divide_2_1    (dNum1, dNum2));
        }
        else { std::cout << strBadInput << std::endl; continue;}
    }
    return;
}

    //функция главная
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "ru-RU");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    calc();

    return 0;
}
// Thanks for the tutorial!
