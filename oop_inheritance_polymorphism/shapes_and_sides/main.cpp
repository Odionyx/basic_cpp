#include <iostream>
#include <Windows.h>

class Shape {
public:
    Shape() : numSides{0} {}
    short int getNumSides() {return numSides;}
    std::string& getName () {return shapeName;}
    ~Shape(){}
protected:
    Shape(short int i, const std::string& std) : numSides{i}, shapeName{std} {}
private:
    std::string shapeName {"Фигура"};
    short int numSides;
};

class Triangle : public Shape {
public:
    Triangle() : Shape(3, "Треугольник") {}
    ~Triangle(){}
};

class Quadrangle : public Shape {
public:
    Quadrangle() : Shape(4, "Четырёхугольник") {}
    ~Quadrangle(){}
};

int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru-RU");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Shape s;
    Triangle t;
    Quadrangle q;

    std::cout << "Количество сторон: " << std::endl;
    for (short int i = 0; i < 3; ++i) {
        switch (i) {
        case 0:
            std::cout << s.getName() << ": " << s.getNumSides() << std::endl;
            break;
        case 1:
            std::cout << t.getName() << ": " << t.getNumSides() << std::endl;
            break;
        case 2:
            std::cout << q.getName() << ": " << q.getNumSides() << std::endl;
            break;
        }
    }
    return 0;
}
    // Thanks for the tutorial!
