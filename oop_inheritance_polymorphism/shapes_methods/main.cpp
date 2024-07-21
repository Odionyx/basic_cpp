#include <iostream>
#include <Windows.h>

class Shape {
public:
    virtual bool correct(void){
        if(numSides!=0) return false;
        return true;
    }
    virtual void getInfo(void) {
        std::cout << shapeName << ": " << std::endl;
        std::cout << (correct()?"Правильная":"Неправильная") << std::endl;
        std::cout << "Количество сторон: " << numSides << std::endl;
        std::cout << std::endl;
        return;
    }
    Shape() : numSides{0} {}
    virtual ~Shape() {/*std::cout<<"goodbye!\n";*/}
protected:
    Shape(short int numSides): numSides{numSides} {}
    std::string shapeName {"Фигура"};
    short int numSides;
};


class Triangle : public Shape {
public:
    bool correct(void) override {
        if((numSides!=3)||((A+B+C)!=180)) return false;
        return true;
    }
    void getInfo(void) final {
        std::cout << shapeName << ": " << std::endl;
        std::cout << (correct()?"Правильная":"Неправильная") << std::endl;
        std::cout << "Количество сторон: " << numSides << std::endl;
        std::cout << "Стороны: "<<"a="<< a <<" b="<< b <<" c="<< c << std::endl;
        std::cout << "Углы:"<<"\t A="<< A <<" B="<< B <<" C="<< C << std::endl;
        std::cout << std::endl;
        return;
    }

    Triangle (short int a, short int b, short int c, short int A, short int B, short int C)
        : Shape(3), a{a}, b{b}, c{c}, A{A}, B{B}, C{C} {
        this->shapeName = "Треугольник";
    }
    ~Triangle(){}
protected:
    short int a{0};
    short int A{0};
    short int b{0};
    short int B{0};
    short int c{0};
    short int C{0};
};


class Quadrangle : public Shape {
public:
    bool correct(void) override {
        if((numSides!=4)||((A+B+C+D)!=360)) return false;
        return true;
    }
    void getInfo(void) final {
        std::cout << shapeName << ": " << std::endl;
        std::cout << (correct()?"Правильная":"Неправильная") << std::endl;
        std::cout << "Количество сторон: " << numSides << std::endl;
        std::cout << "Стороны: "<<"a="<< a <<" b="<< b <<" c="<< c <<" d="<< d << std::endl;
        std::cout << "Углы:"<<"\t A="<< A <<" B="<< B <<" C="<< C <<" D="<< D << std::endl;
        std::cout << std::endl;
        return;
    }

    Quadrangle(short int a, short int b, short int c, short int d,
               short int A, short int B, short int C, short int D)
            : Shape(4), a{a}, b{b}, c{c}, d{d}, A{A}, B{B}, C{C}, D{D} {
        this->shapeName = "Четырёхугольник";
    }
    ~Quadrangle(){}
protected:
    short int a{0};
    short int A{0};
    short int b{0};
    short int B{0};
    short int c{0};
    short int C{0};
    short int d{0};
    short int D{0};
};


class RightAngledTri : public Triangle {
public:
    bool correct(void) override {
        if((!Triangle::correct())||(C!=90)) return false;
        return true;
    }
    RightAngledTri(short int a, short int b, short int c, short int A, short int B)
        : Triangle (a,b,c,A,B,90) {
        this->shapeName = "Прямоугольный треугольник";
    }
    ~RightAngledTri(){}
};


class IsoscelesTri : public Triangle {
public:
    bool correct(void) override {
        if((!Triangle::correct())||(a!=c)||(A!=C)) return false;
        return true;
    }
    IsoscelesTri (short int a, short int b, short int A, short int B)
        : Triangle (a,b,a,A,B,A){
        this->shapeName = "Равнобедренный треугольник";
    }
    ~IsoscelesTri(){}
};


class EquilateralTri : public IsoscelesTri {
public:
    bool correct(void) override {
        if((!IsoscelesTri::correct())||(a!=b)||(C!=60)||(B!=C)) return false;
        return true;
    }
    EquilateralTri (short int a, short int A)
        : IsoscelesTri (a,a,A,A){
        this->shapeName = "Равносторонний треугольник";
    }
    ~EquilateralTri(){}
};


class Parallelogram : public Quadrangle {
public:
    bool correct(void) override {
        if((!Quadrangle::correct())||(a!=c)||(b!=d)||(A!=C)||(B!=D)) return false;
        return true;
    }
    Parallelogram(short int a, short int b, short int A, short int B)
        : Quadrangle (a,b,a,b,A,B,A,B){
        this->shapeName = "Параллелограмм";
    }
    ~Parallelogram(){}
};


class Rhomb : public Parallelogram {
public:
    bool correct(void) override {
        if((!Parallelogram::correct())||(c!=b)) return false;
        return true;
    }
    Rhomb(short int a, short int A, short int B)
        : Parallelogram (a,a,A,B) {
        this->shapeName = "Ромб";
    }
    ~Rhomb(){}
};


class RectangleR : public Parallelogram {
public:
    bool correct(void) override {
        if((!Parallelogram::correct())||(C!=90)||(C!=B)) return false;
        return true;
    }
    RectangleR(short int a, short int b)
            : Parallelogram (a,b,90,90){
        this->shapeName = "Прямоугольник";
    }
    ~RectangleR(){}
};


class Square : public RectangleR {
public:
    bool correct(void) override {
        if((!RectangleR::correct())||(c!=b)) return false;
        return true;
    }
    Square(short int a): RectangleR (a,a){
        this->shapeName = "Квадрат";
    }
    ~Square(){}
};


int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru-RU");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Shape           sh;
    Triangle        tr(11,22,33,44,60,77);
    RightAngledTri  ri(22,33,55,45,45);
    IsoscelesTri    is(24,35,56,68);
    EquilateralTri  eq(23,60);
    Quadrangle      qu(11,22,33,44,55,66,77,88);
    Parallelogram   pa(13,24,81,99);
    Rhomb           rh(15,84,96);
    RectangleR      re(35,79);
    Square          sq(46);

    Shape* sarr[] {&sh, &tr, &ri, &is, &eq, &qu, &pa, &rh, &re, &sq};
    short int size = (sizeof(sarr)/ sizeof(sarr[0]));
    for (short int i = 0; i < size; ++i) sarr[i]->getInfo();

    return 0;
}
    // Thanks for the tutorial!
