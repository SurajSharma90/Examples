//#include<iostream>
//
//using namespace std;
//
//template<typename T>
//
//class tArr
//{
//private:
//	int cap;
//	int nrOfEl;
//	T **arr;
//
//public:
//	tArr(int size = 5);
//	~tArr();
//
//	void initialize(int from);
//	void expand();
//	void push(const T &element);
//	const int& size()const { return this->nrOfEl; }
//
//	T& operator[] (const int index);
//};
//
//template<typename T>
//tArr<T>::tArr(int size = 5)
//{
//	this->cap = size;
//	this->nrOfEl = 0;
//	this->arr = new T*[this->cap];
//
//	initialize(this->nrOfEl);
//}
//
//template<typename T>
//tArr<T>::~tArr()
//{
//	for (size_t i = 0; i < nrOfEl; i++)
//	{
//		delete this->arr[i];
//	}
//	delete[]this->arr;
//}
//
//template<typename T>
//T& tArr<T>::operator[](const int index)
//{
//	if (index < 0 || index >= this->nrOfEl)
//		throw("OUT OF BOUDNS!");
//
//	return *this->arr[index];
//}
//
//template<typename T>
//void tArr<T>::initialize(int from)
//{
//	for (size_t i = from; i < cap; i++)
//	{
//		this->arr[i] = nullptr;
//	}
//}
//
//template<typename T>
//void tArr<T>::expand()
//{
//	this->cap *= 2;
//
//	T **tempArr = new T*[this->cap];
//
//	for (size_t i = 0; i < this->nrOfEl; i++)
//	{
//		tempArr[i] = this->arr[i];
//	}
//
//	delete[]this->arr;
//
//	this->arr = tempArr;
//
//	initialize(this->nrOfEl);
//}
//
//template<typename T>
//void tArr<T>::push(const T& element)
//{
//	if (this->nrOfEl >= this->cap)
//	{
//		this->expand();
//	}
//
//	this->arr[this->nrOfEl++] = new T(element);
//}
//
//int main()
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//
//	tArr<int> iArr;
//
//	iArr.push(220);
//	iArr.push(2003);
//	iArr.push(20300);
//	iArr.push(24000);
//	iArr.push(20006);
//	iArr.push(230);
//	iArr.push(260);
//	iArr.push(205);
//
//	for (size_t i = 0; i < iArr.size(); i++)
//	{
//		cout << iArr[i] << endl;
//	}
//
//	system("PAUSE");
//
//	return 0;
//}