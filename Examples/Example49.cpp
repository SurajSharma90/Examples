//#include<iostream>
//
//using namespace std;
//
//class IntArr
//{
//private:
//	int cap;
//	int nrOfEl;
//	int *arr;
//
//	void initialize(int from)
//	{
//		for (size_t i = from; i < cap; i++)
//		{
//			arr[i] = 0;
//		}
//	}
//
//	void expand() 
//	{
//		cap *= 2;
//
//		int *tempArr = new int[cap];
//
//		for (size_t i = 0; i < nrOfEl; i++)
//		{
//			tempArr[i] = arr[i];
//		}
//
//		delete[] arr;
//
//		arr = tempArr;
//
//		initialize(nrOfEl);
//	}
//
//public:
//	IntArr()
//	{
//		cap = 10;
//		nrOfEl = 0;
//		arr = new int[cap];
//	}
//
//	~IntArr()
//	{
//		delete[]arr;
//	}
//
//	void add(int el)
//	{
//		if (nrOfEl >= cap)
//			expand();
//
//		arr[nrOfEl++] = el;
//	}
//
//	int getAt(int index) const
//	{
//		if (index < 0 || index >= nrOfEl)
//			throw ("Out of bounds exception!");
//
//		return arr[index];
//	}
//
//	void popBack()
//	{
//		if (nrOfEl > 0)
//			arr[--nrOfEl] = 0;
//		else
//			throw("Empty array!");
//	}
//
//	int getNrOfEl() 
//	{ 
//		return nrOfEl; 
//	}
//};
//
//int main()
//{
//	IntArr arr;
//
//	arr.add(10);
//	arr.add(11);
//	arr.add(10);
//	arr.add(11);
//	arr.add(10);
//	arr.add(10);
//	arr.add(11);
//	arr.add(10);
//	arr.add(11);
//	arr.add(10);
//	arr.add(11);
//	arr.add(10);
//	arr.add(11);
//	arr.add(10);
//	arr.add(11);
//	arr.add(10);
//	arr.add(11);
//	arr.add(10);
//	arr.add(11);
//	arr.add(10);
//	arr.add(11);
//	arr.add(11);
//
//	for (size_t i = 0; i < arr.getNrOfEl(); i++)
//	{
//		cout << i << ": " << arr.getAt(i) << endl;
//	}
//
//	system("PAUSE");
//
//	return 0;
//}