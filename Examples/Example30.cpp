//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int b = 120;
//
//	int &r = a; // r became a
//	int *p1 = &a;
//	int *p2 = &b;
//
//	//cout << r << endl;
//	//r = b; //r OR a's value is changed to 120!!!!!
//	//cout << r << endl;
//	//cout << a << endl;
//
//	cout << p1 << " " << *p1 << endl;
//	cout << p2 << " " << *p2 << endl;
//
//	p1 = p2; //P1 also poiting to b
//
//	cout << p1 << " " << *p1 << endl;
//	cout << p2 << " " << *p2 << endl;
//
//	p1 = &a;
//	*p1 = *p2; //a gets value of b
//
//	cout << p1 << " " << *p1 << endl;
//	cout << p2 << " " << *p2 << endl;
//
//	system("PAUSE");
//
//	return 0;
//}
