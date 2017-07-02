//#include<iostream>
//
//using namespace std;
//
//void func(int *a, int &b)
//{
//	*a = 10;
//	b = 20;
//
//	cout << "a: " << *a << endl;
//	cout << "b: " << b << endl;
//
//	*a = b;
//
//	cout << "a: " << *a << endl;
//	cout << "b: " << b << endl;
//}
//
//int main()
//{
//	int numberPtr = 0;
//	int numberRef = 0;
//
//	func(&numberPtr, numberRef);
//
//	//Creation: type *name = 
//	//initialaddress (nullptr);
//	
//	//Assignmen of variable address: 
//	//name = variable identifier;
//	
//	//Change value of variable being pointed to: 
//	//*(dereference)name = value;
//
//	//What pointer is pointing to: *(dereference)name
//	//The pointer itself: name
//	//Variables address: &name
//
//	system("PAUSE");
//
//	return 0;
//}
