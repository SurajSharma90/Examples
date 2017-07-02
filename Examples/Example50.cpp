//#include<iostream>
//
//using namespace std;
//
//class IntArr
//{
//private:
//	int cap;
//	int nrOfEl;
//	int **arr;
//
//	void expand()
//	{
//		cap *= 2;
//
//		int **tempArr = new int*[cap];
//
//		for (size_t i = 0; i < nrOfEl; i++)
//		{
//			tempArr[i] = new int(*arr[i]);
//		}
//
//		for (size_t i = 0; i < nrOfEl; i++)
//		{
//			delete arr[i];
//		}
//		delete[]arr;
//
//		arr = tempArr;
//	}
//
//public:
//	IntArr()
//	{
//		cap = 10;
//		nrOfEl = 0;
//		arr = new int*[cap];
//	}
//
//	~IntArr()
//	{
//		for (size_t i = 0; i < nrOfEl; i++)
//		{
//			delete arr[i];
//		}
//		delete[]arr;
//	}
//
//	int getSize() const
//	{
//		return nrOfEl;
//	}
//
//	void add(int el)
//	{
//		if (nrOfEl >= cap)
//			expand();
//
//		arr[nrOfEl++] = new int(el);
//	}
//
//	int getAt(int index) const
//	{
//		if (index < 0 || index >= nrOfEl)
//			throw("Out of bounds exception!");
//
//		return *arr[index];
//	}
//
//	void popBack()
//	{
//		if (nrOfEl > 0)
//			delete arr[--nrOfEl];
//	}
//};
//
//int main()
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//
//	IntArr arr;
//
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//	arr.add(10);
//
//	for (size_t i = 0; i < arr.getSize(); i++)
//	{
//		cout << i << ":" << arr.getAt(i) << "\n";
//	}
//
//	system("PAUSE");
//
//	return 0;
//}
