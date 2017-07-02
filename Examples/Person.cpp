#include "Person.h"

Person::Person(std::string name, int age)
	: name(name), age(age)
{

}

Person::~Person()
{

}

std::string Person::toString() const
{
	return "Name: " + this->name + " | Age: " + std::to_string(this->age);
}