#ifdef _WIN32
#include <windows.h>
#endif
#include <iostream>
using std::cout, std::cin, std::endl;


int function(const std::string& str, int forbidden_length) {
    if (str.length() == forbidden_length) {
        throw std::length_error {"�� ����� ����� ��������� �����! �� ��������"};
    }
    int lengthStr = str.length();
    return lengthStr;
}

void print() {
    int forbidden_length{0}, lengthStr{0};
    std::string str{""};

    std::cout << "������� ��������� �����: ";
    std::cin >> forbidden_length;
    try {
        if (forbidden_length < 1) {
            throw std::length_error {"������ �������� �����! �� ��������"};
        }
        while (true) {
            std::cout << "������� �����: ";
            std::cin >> str;

            lengthStr = function(str, forbidden_length);
            std::cout <<"����� ����� "<<'"'<< str <<'"'
                      <<" ����� "<< lengthStr <<std::endl;
        }
    }
    catch (std::length_error& err){
        std::cerr << err.what() << std::endl;
    }
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru_RU");
#ifdef _WIN32
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
#endif

    print ();
    return 0;
}
    // Thanks for the tutorial!
