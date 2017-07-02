#ifndef DARR_H
#define DARR_H

#include"Person.h"

class Darr
{
private:
	int cap;
	int nrOfEl;
	Person **arr;

	void initialize(int from);
	void expand();

public:
	Darr();
	virtual ~Darr();
	void add(const Person &el);
	Person& getAt(int index) const;
	inline const int& getNrOfEl() const { return this->nrOfEl; }
};

#endif