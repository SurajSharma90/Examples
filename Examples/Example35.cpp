//#include<iostream>
//
//using namespace std;
//
//void initialize(int from, const int &cap, int *arr);
//void expand(int *&arr, int &cap, const int &nrOfEl);
//void addElement(int el, int *&arr, int &nrOfEl, int &cap);
//int getAt(int index, int *arr, const int &nrOfEl);
//
//void printAll(int *arr, const int &nrOfEl)
//{
//	for (size_t i = 0; i < nrOfEl; i++)
//	{
//		std::cout << i << ": " << arr[i] << std::endl;
//	}
//}
//
//int main()
//{
//	int cap = 2; //Max cap for array
//	int nrOfEl = 0;  //Nr of valid elements in array
//	int *arr = new int[cap];
//
//	initialize(0, cap, arr);
//
//	addElement(100, arr, nrOfEl, cap);
//	addElement(2000, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//	addElement(100, arr, nrOfEl, cap);
//
//	printAll(arr, nrOfEl);
//
//	system("PAUSE");
//
//	return 0;
//}
//
//void initialize(int from, const int &cap, int *arr)
//{
//	for (size_t i = from; i < cap; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void expand(int *&arr, int &cap, const int &nrOfEl)
//{
//	//1: Increase max cap
//	cap += 5;
//
//	//2: Create temp array
//	int *tempArr = new int[cap];
//
//	//3: Copy over valid values from old array
//	for (size_t i = 0; i < nrOfEl; i++)
//	{
//		tempArr[i] = arr[i];
//	}
//
//	//4: Delete old array memory
//	delete[]arr;
//
//	//5: Point old array pointer to new array location
//	arr = tempArr;
//
//	//6: Init new array
//	initialize(nrOfEl, cap, arr);
//
//	cout << "ARRAY EXPANDED, NEW SIZE: " << cap << endl;
//}
//
//void addElement(int el, int *&arr, int &nrOfEl, int &cap)
//{
//	if (nrOfEl >= cap)
//	{
//		expand(arr, cap, nrOfEl);
//	}
//
//	arr[nrOfEl++] = el;
//}
//
//int getAt(int index, int *arr, const int &nrOfEl)
//{
//	int value = 0;
//
//	if (index >= nrOfEl && index < 0) //ERROR OUT OF BOUNDS
//	{
//		cout << "OUT OF BOUNDS!" << endl;
//		throw ("OUT OF BOUNDS!");
//	}
//	else
//		value = arr[index];
//
//	return value;
//}
