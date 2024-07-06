#include <iostream>
#include <Windows.h>

class Counter
{
public:
    Counter(void) { /*++count; std::cout << "create class " << count <<std::endl;*/}
    Counter(int num) {
        this->num = num;
//        ++count; std::cout << "create class " << count <<std::endl;
    }
    ~Counter() { /*std::cout << "delete class " << count << std::endl; --count;*/}

    void getCount(void) {
        std::cout << num << std::endl;
    }

    void inc(void) {
        this -> num++;
    }
    void dec(void) {
        this -> num--;
    }
private:
    int num = 1;
    int count = 0;
};

void inputS (class Counter &count) {
    int num = 0;
    std::string str{""};

    do {
        std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
        std::cin >> str;

        if (str == "��") {
            std::cout << "������� ��������� �������� ��������: ";
            std::cin >> num;
            count = Counter(num);
        } else if (str == "���") {
            count = Counter();
        } else { std::cout << "������������ ����" << std::endl;
        }
    } while (!((str == "��")||(str == "���")));
}

void counter(class Counter &count)
{
    char ch = ' ';
    inputS (count);

    while (ch != 'x') {
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
        std::cin >> ch;
        switch (ch)
        {
        case '+':
            count.inc();
            break;
        case '-':
            count.dec();
            break;
        case '=':
            count.getCount();
            break;
        case 'x':
            std::cout << "�� ��������!" << std::endl;
            break;
        }
    }
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "ru-RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter count;
    counter(count);
    return 0;
}
// Thanks for the tutorial!
