#pragma once

#include "Person.h"

class Teacher :
	public Person
{
private:
	int salary;

public:
	Teacher(string name, int age, int salary);
	virtual ~Teacher();

	const int& getSalary()const { return this->salary; }

	virtual string getAsString();
};

