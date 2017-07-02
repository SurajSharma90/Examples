#pragma once

#include "Person.h"

class Student :
	public Person
{
private:
	int studentID;
	int credits;

public:
	Student(string name, int age, int studentID, int credits);
	virtual ~Student();

	const int& getStudentID()const { return this->studentID; }
	const int& getCredits()const { return this->credits; }

	virtual string getAsString();
};

