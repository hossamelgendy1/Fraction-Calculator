#include <iostream>
using namespace std;

class Fraction
{
private:
	int numerator, denominator;
public:
	Fraction();
	Fraction(int num, int denom);
	void setNumerator(int num);
	int getNumerator();
	void setDenominator(int denom);
	int getDenominator();
	void reduce();
	Fraction operator+(const Fraction& obj);
	Fraction operator-(const Fraction& obj);
	Fraction operator*(const Fraction& obj);
	Fraction operator/(const Fraction& obj);
	bool operator>(const Fraction& obj);
	bool operator>=(const Fraction& obj);
	bool operator<(const Fraction& obj);
	bool operator<=(const Fraction& obj);
	bool operator==(const Fraction& obj);
	friend ostream& operator<<(ostream& output, const Fraction& obj);
	friend istream& operator>>(istream& input, Fraction& obj);

};

