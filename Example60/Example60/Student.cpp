#include "Student.h"

Student::Student(string name, int age, int studentID)
	:Person(name, age)
{
	this->studentID = studentID;
}

Student::~Student()
{

}

string Student::getAsString()const
{
	return "Name: " + this->getName() + " Age: " + to_string(this->getAge()) + " ID: " + to_string(this->studentID) +  "\n";
}