#pragma once

#include<string>

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person(string name, int age);
	virtual ~Person();

	//Accessors
	const string& getName()const { return this->name; }
	const int& getAge()const { return this->age; }

	virtual string getAsString() = 0;
};