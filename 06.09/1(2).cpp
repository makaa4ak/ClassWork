#include <iostream>
using namespace std;

class Fraction
{
private:
    int setdenom1;
    int setdenom2;
    int bol;
    int numerator_stock;
    int denominator_stock;


    int numerator;
    int denominator;


public:
    void init(int num1, int num2)
    {
        numerator = num1;
        denominator = num2;
    }


    Fraction sum(Fraction sm)
    {
        Fraction SUM;
        bol = 0;

        for (int i = 1; bol < 1; i++)
        {
            if (i % sm.denominator == 0 && i % denominator == 0)
            {
                setdenom1 = i / denominator;
                setdenom2 = i / sm.denominator;

                SUM.denominator = i;

                numerator_stock = numerator * setdenom1;
                SUM.numerator = sm.numerator * setdenom2;

                SUM.numerator = SUM.numerator + numerator_stock;


                bol = 1;
            }
        }

        cout << "Sum fraction:\n" << SUM.numerator << endl << "--" << endl << SUM.denominator << endl << endl << endl;
        return SUM;


    }

    Fraction Factor(Fraction fact)
    {

        Fraction FACT;

        FACT.numerator = numerator * fact.denominator;
        FACT.denominator = denominator * fact.numerator;

        cout << "Factor fraction:\n" << FACT.numerator << endl << "--" << endl << FACT.denominator << endl << endl << endl;
        return FACT;

    }



    void Print()
    {
        cout << "fraction : \n" << numerator << endl << "--" << endl << denominator << endl << endl << endl;
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
    system("chcp 1251");
    Fraction a;

    a.init(3, 2);
    a.Print();

    Fraction sm;
    sm.init(3, 4);
    a.sum(sm);

    Fraction FACT;
    FACT.init(3, 4);
    a.Factor(FACT);

}