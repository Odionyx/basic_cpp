// Task3_Structure_output.cpp
#include <iostream>

struct Address {
    std::string city;
    std::string street;
    short houseNum;
    short apartment;
    int index;
};

void printScreen(short num, struct Address address, std::string* summary) {
    switch (num) {
        case 0: std::cout << summary[num] << address.city           << std::endl; break;
        case 1: std::cout << summary[num] << address.street         << std::endl; break;
        case 2: std::cout << summary[num] << address.houseNum       << std::endl; break;
        case 3: std::cout << summary[num] << address.apartment      << std::endl; break;
        case 4: std::cout << summary[num] << address.index          << std::endl; break;
        default: std::cout << " Bad index array print"              << std::endl; break;
    }
}

int main() {
    setlocale(LC_ALL, ".1251");

    Address address = { "City", "Street", 0, 0, 0};

    std::string summary[5] = {"Город: ", "Улица: ", "Номер дома: ", "Номер квартиры: ", "Индекс: "};
    std::string* ptrSummary = &summary[0];

    address.city = "Москва";
    address.street = "Арбат";
    address.houseNum = 12;
    address.apartment = 8;
    address.index = 123456;

    for (short num = 0; num < 5; num++) {
        printScreen(num, address, ptrSummary);
    }
    std::cout << std::endl;

    address.city = "Ижевск";
    address.street = "Пушкина";
    address.houseNum = 59;
    address.apartment = 143;
    address.index = 953769;

    for (short num = 0; num < 5; num++) {
        printScreen(num, address, ptrSummary);
    }

    return 0;
}
// Thanks for the tutorial!