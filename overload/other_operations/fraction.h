#ifndef FRACTION_H
#define FRACTION_H


class Fraction
{
public:
    Fraction operator+(Fraction& rF);
    Fraction operator-(Fraction &rF);
    Fraction operator*(Fraction& rF);
    Fraction operator/(Fraction& rF);
    Fraction operator-(void);
    Fraction& operator++(void);
    Fraction operator++(int);
    Fraction& operator--(void);
    Fraction operator--(int);

    int gcdNOD(int x, int y);
    int getNum();
    int getDenom();
    void printResult(void);
    Fraction(short int numerator, short int denominator);
    ~Fraction() = default;
private:
    short int numerator_  {0};   //числитель
    short int denominator_{0};   //знаменатель
};

#endif // FRACTION_H
