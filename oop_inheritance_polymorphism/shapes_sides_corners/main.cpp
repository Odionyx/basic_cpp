#include <iostream>
#include <Windows.h>

class LineSegment {
public:
    LineSegment() : numSides{0} {}
    short int getNumSides() {return numSides;}
    virtual short int getValue(const char ch) {
        switch (ch) {
        case 'a': return a; break;
        case 'A': return A; break;
        }
        return 0;
    }
    std::string& getName () {return shapeName;}
    ~LineSegment() {/*std::cout << "goodbye!" << std::endl;*/}
protected:
    LineSegment(short int numSides, short int a, short int A): numSides{numSides},a{a},A{A} {}

    std::string shapeName {"Фигуристая фигура"};
    short int numSides;
    short int a{0};
    short int A{0};
};


class Triangle : public LineSegment {
public:
    Triangle (short int a, short int b, short int c, short int A, short int B, short int C)
        : LineSegment(3, a, A) {
        this->shapeName = "Треугольник";
        this->b = b;    this->c = c;
        this->B = B;    this->C = C;
    }
    short int getValue(const char ch) override {
        switch (ch) {
        case 'a': return a; break;
        case 'A': return A; break;
        case 'b': return b; break;
        case 'B': return B; break;
        case 'c': return c; break;
        case 'C': return C; break;
        default:return(-1); break;
        }
        return 0;
    }
    ~Triangle(){}
protected:
    short int b{0};
    short int B{0};
    short int c{0};
    short int C{0};
};


class Quadrangle : public LineSegment {
public:
    Quadrangle(short int a, short int b, short int c, short int d,
               short int A, short int B, short int C, short int D)
            : LineSegment(4, a, A) {
        this->shapeName = "Четырёхугольник";
        this->b = b;    this->c = c;    this->d = d;
        this->B = B;    this->C = C;    this->D = D;
    }
    short int getValue(const char ch) override {
        switch (ch) {
        case 'a': return a; break;
        case 'A': return A; break;
        case 'b': return b; break;
        case 'B': return B; break;
        case 'c': return c; break;
        case 'C': return C; break;
        case 'd': return d; break;
        case 'D': return D; break;
        default:return(-1); break;
        }
        return 0;
    }
    ~Quadrangle(){}
protected:
    short int b{0};
    short int B{0};
    short int c{0};
    short int C{0};
    short int d{0};
    short int D{0};
};


class RightAngledTri : public Triangle {
public:
    RightAngledTri(short int a, short int b, short int c, short int A, short int B)
        : Triangle (a,b,c,A,B,90) {
        this->shapeName = "Прямоугольный треугольник";
    }
    ~RightAngledTri(){}
};


class IsoscelesTri : public Triangle {
public:
    IsoscelesTri (short int a, short int b, short int A, short int B)
        : Triangle (a,b,a,A,B,A){
        this->shapeName = "Равнобедренный треугольник";
    }
    ~IsoscelesTri(){}
};


class EquilateralTri : public IsoscelesTri {
public:
    EquilateralTri (short int a, short int A)
        : IsoscelesTri (a,a,A,A){
        this->shapeName = "Равносторонний треугольник";
    }
    ~EquilateralTri(){}
};


class Parallelogram : public Quadrangle {
public:
    Parallelogram(short int a, short int b, short int A, short int B)
        : Quadrangle (a,b,a,b,A,B,A,B){
        this->shapeName = "Параллелограмм";
    }
    ~Parallelogram(){}
};


class Rhomb : public Parallelogram {
public:
    Rhomb(short int a, short int A, short int B)
        : Parallelogram (a,a,A,B) {
        this->shapeName = "Ромб";
    }
    ~Rhomb(){}
};


class RectangleR : public Parallelogram {
public:
    RectangleR(short int a, short int b)
            : Parallelogram (a,b,90,90){
        this->shapeName = "Прямоугольник";
    }
    ~RectangleR(){}
};


class Square : public RectangleR {
public:
    Square(short int a): RectangleR (a,a){
        this->shapeName = "Квадрат";
    }
    ~Square(){}
};


void printInfo(LineSegment& l){
    std::cout << l.getName() << ": " << std::endl;
    short int size = l.getNumSides();
    while (true) {
        std::cout << "Стороны: "<<"a="<<l.getValue('a');
        if (size <2) {
            std::cout << std::endl;
            std::cout << "Углы:"<<"\t A="<<l.getValue('A');
            std::cout << std::endl; break;
        }
        std::cout <<" b="<<l.getValue('b')<<" c="<<l.getValue('c');
        if (size == 4) {
            std::cout <<" d="<<l.getValue('d')<< std::endl;
        } else { std::cout << std::endl;}

        std::cout << "Углы:"<<"\t A="<<l.getValue('A')<<" B="<<l.getValue('B')<<" C="<<l.getValue('C');
        if (size == 4) {
            std::cout <<" D="<<l.getValue('D')<< std::endl;
        } else { std::cout << std::endl;}
        break;
    }
    std::cout << std::endl;
}


int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru-RU");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

//    LineSegment l;
//    printInfo(l);

    Triangle t      (11,22,33,44,55,66);
    printInfo(t);

    RightAngledTri r(22,33,44,55,66);
    printInfo(r);

    IsoscelesTri i  (24,35,57,68);
    printInfo(i);

    EquilateralTri e(23,56);
    printInfo(e);

    Quadrangle q    (11,22,33,44,55,66,77,88);
    printInfo(q);

    Parallelogram p (13,24,68,80);
    printInfo(p);

    Rhomb rh        (15,35,68);
    printInfo(rh);

    RectangleR re   (35,79);
    printInfo(re);

    Square sq       (46);
    printInfo(sq);
    return 0;
}
    // Thanks for the tutorial!
