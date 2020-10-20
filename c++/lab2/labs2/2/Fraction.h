#pragma once
class Fraction
{
public:

	Fraction(int numerator, int denominator);
	Fraction();
	~Fraction();

	void prinitAsFraction(double decimal_fraction);
	void reduce();
	int minDiv(int a, int b);
	int gcd(int n, int m);
	int getNumerator();
	int getDenominator();
	void print();

	Fraction operator+(Fraction val);
	Fraction operator-(Fraction val);
	Fraction operator*(Fraction mult);
	Fraction operator/(Fraction div);
	friend std::ostream& operator<< (std::ostream& out, const Fraction& f);

private:
	int _numerator;
	int _denominator;
};