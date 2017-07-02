//#include<iostream>
//
//using namespace std;
//
//void func(int *&intArr)
//{
//	for (size_t i = 0; i < 10; i++)
//	{
//		intArr[i] = 10;
//	}
//}
//
//int main()
//{
//	int *intArr = new int[10];
//
//	func(intArr);
//
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << i << ": " << intArr[i] << endl;
//	}
//
//	delete[] intArr;
//
//	system("PAUSE");
//
//	return 0;
//}
