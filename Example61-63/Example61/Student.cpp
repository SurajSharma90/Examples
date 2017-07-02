#include "Student.h"

Student::Student(string name, int age, int studentID, int credits)
	:Person(name, age)
{
	this->studentID = studentID;
	this->credits = credits;
}

Student::~Student()
{

}

string Student::getAsString()
{
	return "Name: " + this->getName() + " Age: " + to_string(this->getAge()) + " Student ID: " + to_string(this->studentID) + " Credits: " + to_string(this->credits) + "\n";
}