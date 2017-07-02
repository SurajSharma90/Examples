//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int cap = 10;
//	int nrOfElements = 0;
//
//	int **arr = new int*[cap];
//
//	for (size_t i = 0; i < cap; i++)
//	{
//		arr[i] = nullptr;
//	}
//
//	arr[nrOfElements++] = new int(5);
//
//	for (size_t i = 0; i < nrOfElements; i++)
//	{
//		cout << *arr[i] << endl;
//	}
//
//	for (size_t i = 0; i < nrOfElements; i++)
//	{
//		delete arr[i];
//	}
//
//	delete [] arr;
//
//	system("PAUSE");
//
//	return 0;
//}
