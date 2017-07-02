//#include <iostream>
//#include <string>
//#include <ctime>
//
//using namespace std;
//
//class Dice
//{
//private:
//	int maxValue;
//
//public:
//	Dice(int value = 6) { this->maxValue = value; }
//	~Dice(){}
//	int toss() { return rand() % this->maxValue + 1; }
//};
//
//template<typename T>
//class dArr
//{
//private:
//	unsigned cap;
//	unsigned nrOfEl;
//	T **arr;
//
//public:
//	dArr();
//	~dArr();
//
//	void initialize(unsigned from = 0);
//	void expand();
//	void add(const T &obj);
//	int size();
//	T& operator[](const int index);
//};
//
//template<typename T>
//dArr<T>::dArr()
//{
//	this->cap = 5;
//	this->nrOfEl = 0;
//	this->arr = new T*[this->cap];
//	this->initialize();
//}
//
//template<typename T>
//dArr<T>::~dArr()
//{
//	for (size_t i = 0; i < this->cap; i++)
//	{
//		delete this->arr[i];
//	}
//	delete[] this->arr;
//}
//
//template<typename T>
//void dArr<T>::initialize(unsigned from = 0)
//{
//	for (size_t i = from; i < this->cap; i++)
//	{
//		this->arr[i] = nullptr;
//	}
//}
//
//template<typename T>
//void dArr<T>::expand()
//{
//	this->cap += 5;
//
//	T **tempArr = new T*[this->cap];
//
//	for (size_t i = 0; i < this->nrOfEl; i++)
//	{
//		tempArr[i] = new T(*this->arr[i]);
//	}
//
//	for (size_t i = 0; i < this->nrOfEl; i++)
//	{
//		delete this->arr[i];
//	}
//	delete[] this->arr;
//
//	this->arr = tempArr;
//
//	this->initialize(this->nrOfEl);
//}
//
//template<typename T>
//void dArr<T>::add(const T &obj)
//{
//	if (this->nrOfEl >= this->cap)
//		this->expand();
//
//	this->arr[this->nrOfEl++] = new T(obj);
//}
//
//template<typename T>
//int dArr<T>::size()
//{
//	return this->nrOfEl;
//}
//
//template<typename T>
//T& dArr<T>::operator[](const int index)
//{
//	if (index < 0 || index >= this->nrOfEl)
//		throw "Bad index!";
//
//	return *this->arr[index];
//}
//
//int main()
//{
//	srand(static_cast<unsigned>(time(0)));
//
//	dArr<int> mia;
//	dArr<Dice> mda;
//	dArr<string> msa;
//
//	mia.add(10);
//	mia.add(10);
//	mia.add(10);
//	mia.add(10);
//	mia.add(10);
//	mia.add(10);
//	mia.add(10);
//	mia.add(10);
//
//	for (size_t i = 0; i < mia.size(); i++)
//	{
//		cout << mia[i] << endl;
//	}
//
//	mda.add(Dice());
//	mda.add(Dice());
//	mda.add(Dice());
//	mda.add(Dice());
//	mda.add(Dice(8));
//	mda.add(Dice());
//	mda.add(Dice(20));
//	mda.add(Dice(10));
//
//	for (size_t i = 0; i < mda.size(); i++)
//	{
//		cout << mda[i].toss() << endl;
//	}
//
//	system("PAUSE");
//
//	return 0;
//}
//
