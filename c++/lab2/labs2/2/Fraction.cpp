#include "Fraction.h"
#include<iostream>
#include<math.h>


Fraction::Fraction(int numerator = 1, int denominator = 1) : _numerator(numerator), _denominator(denominator)
{
}
Fraction::Fraction() {
    _numerator = 0;
    _denominator = 0;
}
Fraction::~Fraction()
{

}
int Fraction::gcd(int n, int m)
{
    return (m == 0) ? n : gcd(m, n % m);
}
int Fraction::minDiv(int a, int b)
{
    for (int i = 2; i <= std::min(a, b); i++)
    {
        if ((a % i == 0) && (b % i == 0))
            return i;
    }
    return 1;
}
void Fraction::prinitAsFraction(double decimal_fraction)
{
    int den = 100;
    decimal_fraction *= den;
    int divide = 0;
    bool isEmpty = true;
    while (isEmpty)
    {
        divide = minDiv(decimal_fraction, 100);
        if (divide != 1)
        {
            decimal_fraction /= divide;
            den /= divide;

        }
        else
        {
            isEmpty = false;
        }
    }

    std::cout << decimal_fraction << " / " << den << std::endl;

}


void Fraction::reduce()
{
    int divider = gcd(_denominator, _numerator);
    _denominator /= divider;
    _numerator /= divider;
}
int Fraction::getNumerator() {
    return _numerator;
}
int Fraction::getDenominator() {
    return _denominator;
}
void Fraction::print() {
    std::cout << _numerator << " / " << _denominator << std::endl;
}
Fraction Fraction::operator+(Fraction value)
{
    int _div = _denominator * value._denominator;
    int _num = _numerator * value._denominator + value._numerator * _denominator;
    Fraction result(_num, _div);
    return result;
}
Fraction Fraction::operator-(Fraction value)
{
    int _div = _denominator * value._denominator;
    int _num = _numerator * value._denominator - value._numerator * _denominator;
    Fraction result(_num, _div);
    return result;
}
Fraction Fraction::operator*(Fraction value)
{
    int _div = value._numerator * _numerator;
    int _num = value._denominator * _denominator;
    Fraction result(_num, _div);
    return result;
}
Fraction Fraction::operator/(Fraction value)
{
    int _div = _numerator * value._denominator;
    int _num = _denominator * value._numerator;
    Fraction result(_num, _div);
    return result;
}
std::ostream& operator<<(std::ostream& out, const Fraction& f) {
    out << t._numerator << '/' << f._denominator;
    return out;
}