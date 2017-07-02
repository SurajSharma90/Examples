#pragma once

template<typename T>
class dArr
{
private:
	unsigned cap;
	unsigned nrOfEl;
	T* *arr;

	void initialize(const unsigned from);
	void expand();

public:
	dArr(unsigned cap = 5);
	dArr(const dArr& obj);
	~dArr();

	T& operator[](const int index);
	void operator = (const dArr& obj);

	void push(const T& obj);
	void remove(const int index, bool orderedDelete = false);
	const unsigned& size()const;

};

template<typename T>
dArr<T>::dArr(unsigned cap = 5)
{
	this->cap = cap;
	this->nrOfEl = 0;
	this->arr = new T*[this->cap];

	this->initialize(0);
}

template<typename T>
dArr<T>::dArr(const dArr& obj)
{
	this->cap = obj.cap;
	this->nrOfEl = obj.nrOfEl;
	this->arr = new T*[this->cap];

	for (size_t i = 0; i < this->nrOfEl; i++)
	{
		this->arr[i] = new T(obj.arr[i]);
	}

	this->initialize(this->nrOfEl);
}

template<typename T>
dArr<T>::~dArr() 
{
	for (size_t i = 0; i < this->nrOfEl; i++)
	{
		delete this->arr[i];
	}
	delete[]this->arr;
}

template<typename T>
void dArr<T>::initialize(const unsigned from)
{
	for (size_t i = from; i < this->cap; i++)
	{
		this->arr[i] = nullptr;
	}
}

template<typename T>
void dArr<T>::expand()
{
	this->cap *= 2;

	T* *temp = new T*[this->cap];

	for (size_t i = 0; i < this->nrOfEl; i++)
	{
		temp[i] = this->arr[i];
	}

	delete[] this->arr;

	this->arr = temp;

	this->initialize(this->nrOfEl);
}

template<typename T>
T& dArr<T>::operator[](const int index)
{
	if (index < 0 || index >= this->nrOfEl)
		throw"OUT OF BOUNDS!";

	return *this->arr[index];
}

template<typename T>
void dArr<T>::operator = (const dArr& obj)
{
	for (size_t i = 0; i < this->nrOfEl; i++)
	{
		delete this->arr[i];
	}
	delete[]this->arr;

	this->cap = obj.cap;
	this->nrOfEl = obj.nrOfEl;
	this->arr = new T*[this->cap];

	for (size_t i = 0; i < this->nrOfEl; i++)
	{
		this->arr[i] = new T(obj.arr[i]);
	}

	this->initialize(this->nrOfEl);
}

template<typename T>
void dArr<T>::push(const T& obj)
{
	if (this->nrOfEl >= this->cap)
		this->expand();

	this->arr[this->nrOfEl++] = new T(obj);
}

template<typename T>
void dArr<T>::remove(const int index, bool orderedDelete = false)
{
	if (index < 0 || index >= this->nrOfEl)
		throw"OUT OF BOUNDS!";

	if (orderedDelete)
	{
		delete this->arr[index];

		for (size_t i = index; i < this->nrOfEl-1; i++)
		{
			this->arr[i] = this->arr[i + 1];
		}

		this->arr[--this->nrOfEl] = nullptr;
	}
	else
	{
		delete this->arr[index];
		this->arr[index] = this->arr[--this->nrOfEl];
		this->arr[this->nrOfEl] = nullptr;
	}
}

template<typename T>
const unsigned& dArr<T>::size()const
{
	return this->nrOfEl;
}