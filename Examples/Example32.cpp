//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//
//	//[][][]... Stack
//	//[][][]... Heap
//
//	const int arrSize = 10;
//	int statArr[arrSize];
//	int *dynamicArr = new int[arrSize];
//
//	for (size_t i = 0; i < arrSize; i++)
//	{
//		statArr[i] = rand() % 10 + 1;
//		dynamicArr[i] = rand() % 10 + 1;
//		cout << "Stat: " << statArr[i] << endl;
//		cout << "Dyna: " << dynamicArr[i] << endl;
//	}
//
//	delete [] dynamicArr;
//
//	system("PAUSE");
//
//	return 0;
//}
