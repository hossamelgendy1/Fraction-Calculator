#include "Fraction.h"

Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int num, int denom)
{
	numerator = num;
	denominator = denom;
}

void Fraction::setNumerator(int num)
{
	numerator = num;
}

int Fraction::getNumerator()
{
	return numerator;
}

void Fraction::setDenominator(int denom)
{
	denominator = denom;
}

int Fraction::getDenominator()
{
	return denominator;
}

void Fraction::reduce()
{
	int boundry;
	if (numerator < denominator)
		boundry = numerator;
	else
		boundry = denominator;

	bool isFinished = false;
	while (!isFinished)
	{
		isFinished = true;
		for (int i = 2; i <= boundry; i++)
		{
			if (numerator % i == 0 && denominator % i == 0)
			{
				numerator /= i;
				denominator /= i;
				isFinished = false;
				break;
			}
		}	
	}
	

}

Fraction Fraction::operator+(const Fraction& obj)
{
	Fraction temp;
	temp.setDenominator(denominator * obj.denominator);
	temp.setNumerator((numerator * obj.denominator) + (denominator * obj.numerator));
	temp.reduce();
	return temp;
}

Fraction Fraction::operator-(const Fraction& obj)
{
	Fraction temp;
	temp.setDenominator(denominator * obj.denominator);
	temp.setNumerator((numerator * obj.denominator) - (denominator * obj.numerator));
	temp.reduce();
	return temp;
}

Fraction Fraction::operator*(const Fraction& obj)
{
	Fraction temp;
	temp.setDenominator(denominator * obj.denominator);
	temp.setNumerator(numerator * obj.numerator);
	temp.reduce();
	return temp;
}

//Note: NOT FINISHED
Fraction Fraction::operator/(const Fraction& obj)
{
	Fraction temp;
	temp.setDenominator(denominator / obj.denominator);
	temp.setNumerator(numerator / obj.numerator);
	temp.reduce();
	return temp;
}

bool Fraction::operator>(const Fraction& obj)
{
	return (double(numerator) / denominator) > (double(obj.numerator) / obj.denominator);
}

bool Fraction::operator>=(const Fraction& obj)
{
	return (double(numerator) / denominator) >= (double(obj.numerator) / obj.denominator);
}

bool Fraction::operator<(const Fraction& obj)
{
	return (double(numerator) / denominator) < (double(obj.numerator) / obj.denominator);
}

bool Fraction::operator<=(const Fraction& obj)
{
	return (double(numerator) / denominator) <= (double(obj.numerator) / obj.denominator);
}

bool Fraction::operator==(const Fraction& obj)
{
	return (double(numerator) / denominator) == (double(obj.numerator) / obj.denominator);
}

ostream& operator<<(ostream& output, const Fraction& obj)
{
	output << obj.numerator << '/' << obj.denominator;
	return output;
}

istream& operator>>(istream& input, Fraction& obj)
{
	cout << "Enter numerator and denominator (spase seperated)";
	input >> obj.numerator >> obj.denominator;
	return input;
}
