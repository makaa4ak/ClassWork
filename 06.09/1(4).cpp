#include <iostream>
using namespace std;

class Student
{
private:
	char* name;
	char* email;
	int age;
public:
	Student()
	{
		cout << "Constructor by default" << endl;
		name = nullptr;
		email = nullptr;
		age = 0;
	}
	Student(const char* userName, const char* userEmail, int userAge)
	{
		cout << "Constructor by 3 parametrs" << endl;
		name = new char[strlen(userName) + 1];
		strcpy_s(name, strlen(userName) + 1, userName);
		email = new char[strlen(userEmail) + 1];
		strcpy_s(email, strlen(userEmail) + 1, userEmail);
		age = userAge;
	}
	~Student()
	{
		cout << "Destructor" << endl;
		delete[] name;
		delete[] email;
	}

	void input()
	{
		char buff[30];

		if (name != nullptr)
			delete[] name;
		if (email != nullptr)
			delete[] email;

		cout << "Enter name: ";
		cin >> buff;
		name = new char[strlen(buff) + 1];
		strcpy_s(name, strlen(buff) + 1, buff);

		cout << "Enter email: ";
		cin >> buff;
		email = new char[strlen(buff) + 1];
		strcpy_s(email, strlen(buff) + 1, buff);

		cout << "Enter age: ";
		cin >> age;
	}
	void print()
	{
		cout << "Name: ";
		if (name == nullptr)
			cout << "empty" << endl;
		else
			cout << name << endl;
		cout << "Email: ";
		if (email == nullptr)
			cout << "empty" << endl;
		else
			cout << email << endl;
		cout << "Age: " << age << endl;
	}

	void setName(const char* userName)
	{
		if (name != nullptr)
			delete[] name;

		name = new char[strlen(userName) + 1];
		strcpy_s(name, strlen(userName) + 1, userName);
	}
	void setEmail(const char* userEmail)
	{
		if (email != nullptr)
			delete[] email;

		email = new char[strlen(userEmail) + 1];
		strcpy_s(email, strlen(userEmail) + 1, userEmail);
	}
	void setAge(int userAge)
	{
		age = userAge;
	}
	char* getName()
	{
		return name;
	}
	char* getEmail()
	{
		return email;
	}
	int getAge()
	{
		return age;
	}
};

int main()
{
	Student p1;
	p1.print();
	p1.input();
	cout << "Name: " << p1.getName() << endl << endl;

	Student p2("Dima", "babichdima@gmail.com", 18);
	p2.print();
	p2.setEmail("dimababich@gmail.com");
	cout << "New email: " << p2.getEmail() << endl;
}