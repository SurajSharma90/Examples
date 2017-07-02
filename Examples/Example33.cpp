//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int capacity = 10;
//	int nrOfElements = 0;
//	int *intArr = new int[capacity];
//
//	for (size_t i = 0; i < capacity; i++)
//	{
//		intArr[i] = 0;
//	}
//
//	while (nrOfElements < capacity)
//	{
//		intArr[nrOfElements++] = 5;
//	}
//
//	for (size_t i = 0; i < nrOfElements; i++)
//	{
//		cout << i << ": " << intArr[i] << endl;
//	}
//
//	//EXPANSION BEGIN
//
//	capacity *= 2; //20
//	int *tempArr = new int[capacity]; //Allocation
//
//	for (size_t i = 0; i < nrOfElements; i++)
//	{
//		tempArr[i] = intArr[i];
//	}
//
//	delete [] intArr; //Deallocation
//
//	intArr = tempArr;
//
//	//EXPANSION END
//
//	while (nrOfElements < capacity)
//	{
//		intArr[nrOfElements++] = 10;
//	}
//
//	for (size_t i = 0; i < nrOfElements; i++)
//	{
//		cout << i << ": " << intArr[i] << endl;
//	}
//
//	system("PAUSE");
//
//	return 0;
//}
