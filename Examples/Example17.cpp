//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//double calculatorFunction(double a, double b, char op);
//
//int main()
//{
//	char choice = '+';
//	double nr1, nr2 = 0.0;
//	
//	cout << "Please input two numbers and an operator: ";
//	cout << "Number 1: ";
//	cin >> nr1;
//	cout << "Number 2: ";
//	cin >> nr2;
//	cout << "Operator (+ - * / ^ Q for quit): ";
//	cin >> choice;
//
//	while (choice != 'Q')
//	{
//		cout << "Result: " << calculatorFunction(nr1, nr2, choice) << endl;
//
//		cout << "Please input two numbers and an operator: ";
//		cout << "Number 1: ";
//		cin >> nr1;
//		cout << "Number 2: ";
//		cin >> nr2;
//		cout << "Operator (+ - * / ^ Q for quit): ";
//		cin >> choice;
//	}
//
//	system("PAUSE");
//
//	return 0;
//}
//
//double calculatorFunction(double a, double b, char op)
//{
//	double result = 0.0;
//
//	if (op == '+')
//	{
//		result = a + b;
//	}
//	else if (op == '-')
//	{
//		result = a - b;
//	}
//	else if (op == '*')
//	{
//		result = a * b;
//	}
//	else if (op == '/')
//	{
//		result = a / b;
//	}
//	else if (op == '^')
//	{
//		result = pow(a, b);
//	}
//	else
//	{
//		cout << "Rubbish operator mate please kindly try again! " << endl;
//	}
//
//	return result;
//}