#pragma once

#include "Person.h"

class Student :
	public Person
{
private:
	int studentID;

public:
	Student(string name, int age, int studentID);
	virtual ~Student();

	virtual string getAsString()const;
};

