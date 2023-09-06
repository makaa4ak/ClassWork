#include <iostream>
using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	void init(int num1, int num2)
	{
		numerator = num1;
		denominator = num2;
	}
	Fraction sum(Fraction p)
	{
		Fraction result;
		return result;
	}

	void setNumerator(int num)
	{
		numerator = num;
	}
	void setDenominator(int num)
	{
		if (num != 0)
		{
			denominator = num;
		}
	}
	int getNumerator()
	{
		return numerator;
	}
	int getDenominator()
	{
		return denominator;
	}
};

int main()
{

}