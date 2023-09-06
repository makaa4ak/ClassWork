#include <iostream>
using namespace std;

class Point 
{
private://Реализация - инкапсуллированная часть класса!!! 
	int x;//поля класса Point 
	int y;
public://интерфейс класса 
	void Print()// методы класса Point 
	{
		cout << x << "\t" << y << endl;
}
	void Init()
	{
		x = rand() % 10;
		y = rand() % 10;

	}
	void Init(int _x,int _y)
	{
		x = _x;
		y = _y;

	}

	void SetX(int v)
	{
		if(v > 0)
		{
			x = v;
		}
	}
	void SetY(int v)
	{
		if (v > 0)
		{
			y = v;
		}
	}

	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}



};

int main()
{
	Point a;
	a.Init();
	a.Print();
	a.Init(7, 7);
	a.Print();

	int x = a.GetX();
	cout << x << endl;

	a.SetX(100);
	a.Print();

}