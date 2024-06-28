// Task2_Accounts.cpp
#include <iostream>
#include <windows.h> /*system для SetConsoleCP */

struct Person {
    int accountNumber;               // номер счёта (целое число)
    std::string ownersName;         // здесь будет храниться имя владельца
    double amountMoney;            // количество денег на счету (дробное число)
};

void data_input( struct Person &pers,const double &newAmount) {
    pers.amountMoney = newAmount;
    return;
}

int main() {
    setlocale(LC_ALL, ".1251");
    SetConsoleCP(1251);

    Person pers = { 0, "Name", 0.0};

    std::string summary[5] = {"номер счёта: ", "имя владельца: ", "баланс: ", "новый баланс: ", "Ваш счёт: "};

    for (int x = 0; x < 4; x++) {
        std::cout << "Введите ";
        if (!x) {
            std::cout << summary[x];
            std::cin >> pers.accountNumber;
        }
        else if (x == 1) {
            std::cout << summary[x];
            std::cin >> pers.ownersName;
        }
        else {
            double newAmount = 0.0;
            std::cout << summary[x];
            std::cin >> newAmount;
            data_input(pers, newAmount);
        }
    }
    std::cout << summary[4] << pers.ownersName << ", " << pers.accountNumber << ", " << pers.amountMoney << std::endl;
    return 0;
}
// Thanks for the tutorial!