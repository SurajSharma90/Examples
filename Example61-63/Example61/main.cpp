#include<iostream>
#include"Student.h"
#include"Teacher.h"

int main()
{
	Student s1("STEVE", 56, 13124124, 230);

	cout << s1.getName() << "\n";
	cout << s1.getCredits() << "\n";
	cout << s1.getAsString();;

	Teacher t1("EVE", 25, 3000);

	cout << t1.getName() << "\n";
	cout << t1.getSalary() << "\n";
	cout << t1.getAsString();

	system("PAUSE");

	return 0;
}