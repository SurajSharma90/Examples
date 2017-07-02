//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	// [string name 023sd0 john][string strPtr 948sd0 023sd0][][]... Stack (STATIC)
//	// [][][][]... Heap (DYNAMIC)
//
//	string name = "john";
//	string *strPtr = nullptr;
//	strPtr = new string; //Dynamic Allocation
//
//	//strPtr = &name; //Memory leak!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//
//	*strPtr = "Bob"; //Dereference
//
//	cout << strPtr << " " << *strPtr << endl;
//
//	delete strPtr; //Deallocate memory
//
//	strPtr = &name;
//
//	cout << strPtr << " " << *strPtr << endl;
//
//	system("PAUSE");
//
//	return 0;
//}
