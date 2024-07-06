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
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> str;

        if (str == "да") {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> num;
            count = Counter(num);
        } else if (str == "нет") {
            count = Counter();
        } else { std::cout << "Неправильный ввод" << std::endl;
        }
    } while (!((str == "да")||(str == "нет")));
}

void counter(class Counter &count)
{
    char ch = ' ';
    inputS (count);

    while (ch != 'x') {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
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
            std::cout << "До свидания!" << std::endl;
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
