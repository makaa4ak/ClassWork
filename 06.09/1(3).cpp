#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		cout << "Constructor by default" << endl;
		x = y = 0;
	}

	~Point()
	{
		cout << "Destructor" << endl;
	}

	void Init(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print()
	{
		cout << "X=" << x << endl << "Y=" << y << endl;
	}
};

int main() 
{
	Point obj1;
	obj1.Init(2, 5);
	obj1.Print();


		Point obj2;
		obj2.Init(9, 15);
		obj2.Print();
}