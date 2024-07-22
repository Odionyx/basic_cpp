#include <iostream>
#include <Windows.h>

#include "class_counter.h"

void counter(void) {
    int num{0};
    int size{0};
    char ch {' '};
    bool b {true};

    Counter count;
    std::string str {""};
    while (b) {
        std::cout <<"�� ������ ������� ��������� �������� ��������? "
                    "������� �� ��� ���: ";
        std::cin >> str;
        std::string str1 {"��"};
        std::string str2 {"���"};

        if (str1 == str) {
            std::cout << "������� ��������� �������� ��������: ";
            std::cin >> num;
            count = Counter(num);
            b = false;
        } else if (str2 == str) {
            count = Counter();
            b = false;
        } else { std::cout << "�������� ����!" << std::endl; }
    }
    while (ch != 'x') {
        std::cout << "������� �������('+', '-', '=' ��� 'x'): ";
        std::cin >> ch;
        switch (ch) {
        case '+': count.inc();      break;
        case '-': count.dec();      break;
        case '=': count.get_count();break;
        case 'x': std::cout << "�� ��������!" << std::endl;break;
        }
    }
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "ru-RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    counter();
    return 0;
}
    // Thanks for the tutorial!
