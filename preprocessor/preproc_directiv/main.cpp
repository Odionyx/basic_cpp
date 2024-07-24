#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>
using std::cout, std::cin, std::endl;


#define MODE 0
#ifndef MODE
#error <MODE is not initialized>
#endif

int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru_RU");
#ifdef _WIN32
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a{0}, b{0};
#if ((1 < MODE) || (MODE < 0))
    std::cout << "Неизвестный режим. Завершение работы." << std::endl;
#elif  (MODE == 0)
    cout << "Работаю в режиме тренировки..." << endl;
#else
#define add(a,b) (a)+=(b)
    cout << "Работаю в боевом режиме..." << endl;
    cout << "Введите число 1: ";
    cin >> a;
    cout << "Введите число 2: ";
    cin >> b;
    cout << "Результат сложения: " << (add(a, b))<< endl;
#undef add

#endif
#undef MODE
    return 0;
}
    // Thanks for the tutorial!
