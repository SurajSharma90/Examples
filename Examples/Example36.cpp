//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//void initialize(int from, const int &cap, string *arr);
//void expand(string *&arr, int &cap, const int &nrOfEl);
//void addElement(string el, string *&arr, int &nrOfEl, int &cap);
//string getAt(int index, string *arr, const int &nrOfEl);
//void printAll(const int &nrOfEl, string *arr);
//
//void menu(int &choice, string *&arr, int &nrOfEl, int &cap)
//{
//	cout << endl;
//	cout << "=MENU=" << endl;
//	cout << "0: Quit" << endl;
//	cout << "1: Add" << endl;
//	cout << "2: Print" << endl;
//	cout << endl;
//
//	cout << "Enter choice bro: ";
//	cin >> choice;
//	cout << endl;
//
//	string name = "";
//
//	switch (choice)
//	{
//	case 0:
//		cout << "QUITTING PROGRAM!" << endl;
//		break;
//	case 1:
//		cout << "Name of car: ";
//		cin.ignore();
//		getline(cin, name);
//		addElement(name, arr, nrOfEl, cap);
//		break;
//
//	case 2:
//		printAll(nrOfEl, arr);
//		break;
//
//	default:
//		cout << "BAD CHOICE BRAH!" << endl;
//		break;
//	}
//}
//
//int main()
//{
//	//Array
//	int cap = 1;
//	int nrOfEl = 0;
//	string *arr = new string[cap];
//
//	//Menu
//	int choice = 0;
//
//	menu(choice, arr, nrOfEl, cap);
//
//	while (choice > 0)
//	{
//		menu(choice, arr, nrOfEl, cap);
//	}
//
//	delete[]arr;
//
//	system("PAUSE");
//
//	return 0;
//}
//
//void initialize(int from, const int &cap, string *arr)
//{
//	for (size_t i = from; i < cap; i++)
//		arr[i] = "";
//}
//
//void expand(string *&arr, int &cap, const int &nrOfEl)
//{
//	cap *= 2;
//
//	string *tempArr = new string[cap];
//
//	for (size_t i = 0; i < nrOfEl; i++)
//	{
//		tempArr[i] = arr[i];
//	}
//
//	delete[]arr;
//
//	arr = tempArr;
//
//	initialize(nrOfEl, cap, arr);
//
//	cout << "ARRAY EXPANDED!" << endl;
//}
//
//void addElement(string el, string *&arr, int &nrOfEl, int &cap)
//{
//	if (nrOfEl >= cap)
//		expand(arr, cap, nrOfEl);
//
//	arr[nrOfEl++] = el;
//
//	cout << "ELEMENT ADDED!" << endl;
//}
//
//string getAt(int index, string *arr, const int &nrOfEl)
//{
//	string data = "";
//
//	if (index >= nrOfEl || index < 0)
//		throw("OUT OF BOUNDS!");
//	else
//		data = arr[index];
//
//	return data;
//}
//
//void printAll(const int &nrOfEl, string *arr)
//{
//	for (size_t i = 0; i < nrOfEl; i++)
//	{
//		cout << i << ": " << arr[i] << endl;
//	}
//}