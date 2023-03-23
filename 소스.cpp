#include<iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student :public Person
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent :public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main()
{
	Person* ptr1 = new Student();			//Student는 Person이기 때문에 이런 선언이 가능하다.
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();
	ptr2->Sleep();
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3;
	return 0;
}