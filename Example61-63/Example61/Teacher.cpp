#include "Teacher.h"

Teacher::Teacher(string name, int age, int salary)
	:Person(name, age)
{
	this->salary = salary;
}

Teacher::~Teacher()
{

}

string Teacher::getAsString()
{
	return "Name: " + this->getName() + " Age: " + to_string(this->getAge()) + " Salary: " + to_string(this->salary) + "\n";
}