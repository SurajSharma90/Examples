#include<iostream>
#include"Student.h"


int main()
{
	Person p1("BOB", 22);
	Student s1("STEVE", 26, 21313123);

	cout << p1.getAsString();
	cout << s1.getAsString();

	system("PAUSE");
	return 0;
}