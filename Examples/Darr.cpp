#include "Darr.h"

Darr::Darr()
{
	this->cap = 10;
	this->nrOfEl = 0;
	this->arr = new Person*[cap];
}

Darr::~Darr()
{
	for (size_t i = 0; i < this->nrOfEl; i++)
	{
		delete this->arr[i];
	}
	delete [] this->arr;
}

//Member functions
void Darr::initialize(int from)
{
	for (size_t i = from; i < this->cap; i++)
	{
		this->arr[i] = nullptr;
	}
}

void Darr::expand()
{
	this->cap *= 2;

	Person **tempArr = new Person*[this->cap];

	for (size_t i = 0; i < this->nrOfEl; i++)
	{
		tempArr[i] = new Person(*this->arr[i]);
	}

	for (size_t i = 0; i < this->nrOfEl; i++)
	{
		delete this->arr[i];
	}
	delete [] this->arr;

	this->arr = tempArr;

	this->initialize(this->nrOfEl);
}

void Darr::add(const Person &el)
{
	if (this->nrOfEl >= this->cap)
		this->expand();

	this->arr[this->nrOfEl++] = new Person(el);
}

Person& Darr::getAt(int index) const
{
	if (index < 0 || index >= this->nrOfEl)
		throw "OUT OF BOUNDS EXCEPTION!";

	return *this->arr[index];
}