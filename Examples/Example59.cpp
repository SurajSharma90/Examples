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
//	tArr(const tArr& obj);
//
//	T& operator[] (const int index);
//
//	void initialize(int from);
//	void expand();
//	void push(const T& obj);
//	void pop(int index);
//	inline const int& size()const { return this->nrOfEl; }
//
//};
//
//template<typename T>
//tArr<T>::tArr(int size = 5)
//{
//	this->cap = size;
//	this->nrOfEl = 0;
//	this->arr = new T*[this->cap];
//	initialize(0);
//}
//
//template<typename T>
//tArr<T>::~tArr()
//{
//	for (size_t i = 0; i < this->nrOfEl; i++)
//	{
//		delete this->arr[i];
//	}
//	delete[] this->arr;
//}
//
//template<typename T>
//tArr<T>::tArr(const tArr& obj)
//{
//	this->cap = obj.cap;
//	this->nrOfEl = obj.nrOfEl;
//	this->arr = new T*[this->cap];
//
//	for (size_t i = 0; i < this->nrOfEl; i++)
//	{
//		this->arr[i] = new T(*obj.arr[i]);
//	}
//
//	initialize(0);
//}
//
//template<typename T>
//T& tArr<T>::operator[](const int index)
//{
//	if (index < 0 || index >= this->nrOfEl)
//		throw("OUT OF BOUNDS!");
//
//	return *this->arr[index];
//}
//
//template<typename T>
//void tArr<T>::initialize(int from)
//{
//	for (size_t i = from; i < this->cap; i++)
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
//void tArr<T>::push(const T& obj)
//{
//	if (this->nrOfEl >= this->cap)
//		expand();
//
//	this->arr[this->nrOfEl++] = new T(obj);
//}
//
//template<typename T>
//void tArr<T>::pop(int index)
//{
//	if (index < 0 || index >= this->nrOfEl)
//		throw("OUT OF BOUNDS!");
//
//	delete this->arr[index];
//
//	for (size_t i = index; i < this->nrOfEl-1; i++)
//	{
//		this->arr[i] = this->arr[i + 1];
//	}
//
//	this->arr[this->nrOfEl--] = nullptr;
//	
//}
//
//int main()
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//
//	tArr<int> arr;
//
//	arr.push(220);
//	arr.push(260);
//	arr.push(205);
//	arr.push(50);
//	arr.push(40);
//	arr.push(203);
//	arr.push(2550);
//
//	arr.pop(6);
//
//	for (size_t i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	system("PAUSE");
//
//	return 0;
//}