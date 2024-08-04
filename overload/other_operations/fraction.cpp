#include "fraction.h"
#include <iostream>

Fraction Fraction::operator+(Fraction& rF) {
    short int x {0}, y{0}, z{0};
    x = (numerator_*rF.denominator_)+(denominator_*rF.numerator_);
    y = denominator_ *rF.denominator_;
    z = gcdNOD(x, y);
    return Fraction((x/z),(y/z));
}
Fraction Fraction::operator-(Fraction& rF) {
    short int x {0}, y{0}, z{0};
    x = ((numerator_ * rF.denominator_)-(rF.numerator_ * denominator_));
    y = denominator_ *rF.denominator_;
    z = gcdNOD(x, y);
    return Fraction((x/z),(y/z));
}
Fraction Fraction::operator*(Fraction& rF) {
    short int x {0}, y{0}, z{0};
    x = (numerator_*rF.numerator_);
    y = (denominator_*rF.denominator_);
    z = gcdNOD(x, y);
    return Fraction((x/z),(y/z));
}
Fraction Fraction::operator/(Fraction& rF) {
    short int x {0}, y{0}, z{0};
    x = (numerator_*rF.denominator_);
    y = (denominator_*rF.numerator_);
    z = gcdNOD(x, y);
    return Fraction((x/z),(y/z));
}
Fraction Fraction::operator-(void) {return Fraction(0,0);
}

Fraction& Fraction::operator++(){
    short int z{0};
    z = gcdNOD(numerator_, denominator_);
    numerator_= (++numerator_/ z);
    denominator_= (++denominator_/ z);
    return *this;
}
Fraction Fraction::operator++(int) {
    Fraction temp{*this};
    ++(*this);
    return temp;
}
Fraction& Fraction::operator--(){
    short int z{0};
    z = gcdNOD(numerator_, denominator_);
    numerator_= (--numerator_/ z);
    denominator_= (--denominator_/ z);
    return *this;
}
Fraction Fraction::operator--(int) {
    Fraction temp{*this};
    --(*this);
    return temp;
}

int Fraction::gcdNOD(int x, int y) {
    // greatest common divisor (b ? gcd (b, a % b) : a;)
    while(x && y) {
        if (x > y) { x %= y;}
        else { if(x< (y%= x)){break;}}
        //cout << " _x= " << x << " _y= "<< y<<endl;
    }
    return (x? (y? ((x>y)? x: y): x): (y? y: 1));
}

int Fraction::getNum(){return this->numerator_;}
int Fraction::getDenom(){return this->denominator_;}

void Fraction::printResult(void){
    std::cout<< numerator_<<'/'<< denominator_<< std::endl;
}
Fraction::Fraction(short int numerator, short int denominator)
    : numerator_{numerator}, denominator_{denominator} {}
