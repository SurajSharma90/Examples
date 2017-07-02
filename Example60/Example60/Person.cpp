#include "Person.h"

Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}

Person::~Person()
{

}

string Person::getAsString()const
{
	return "Name: " + this->name + " Age: " + to_string(this->age) + "\n";
}