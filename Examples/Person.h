#pragma once

#include <string>

class Person
{
private:
	std::string name;
	int age;
public:
	Person(std::string name = "NONE", int age = 0);
	virtual ~Person();

	inline const std::string& getName()const { return this->name; }
	inline const int& getAge()const { return this->age; }
	std::string toString() const;
};

