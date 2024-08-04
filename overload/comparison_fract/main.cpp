#include <iostream>

class Fraction
{
private:
    short int numerator_{0};     //числитель
    short int denominator_{0};   //знаменатель
public:
    Fraction(int numerator, int denominator) {
        numerator_ = numerator;
        denominator_ = denominator;
    }
    bool operator==(Fraction& r){
        return ((numerator_*r.denominator_)==(r.numerator_*denominator_));
    }
    bool operator!=(Fraction& r){
        return (!((numerator_*r.denominator_)==(r.numerator_*denominator_)));
    }
    bool operator<(Fraction& r){
        return ((numerator_*r.denominator_)<(r.numerator_*denominator_));
    }
    bool operator>(Fraction& r){
        return ((r.numerator_*denominator_)<(numerator_*r.denominator_));
    }
    bool operator<=(Fraction& r){
        return (!((r.numerator_*denominator_)<(numerator_*r.denominator_)));
    }
    bool operator>=(Fraction& r){
        return (!((numerator_*r.denominator_)<(r.numerator_*denominator_)));
    }
    ~Fraction() = default;
};

int main()
{
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2)  ? " < "  : " not < " ) << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2)  ? " > "  : " not > " ) << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}
    // Thanks for the tutorial!
