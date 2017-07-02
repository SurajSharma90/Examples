//#include<iostream>
//
//using namespace std;
//
////Shallow copy
////Deep copy bro
//
//class Dice
//{
//private:
//	int *maxValue;
//
//public:
//	Dice(int value);
//	~Dice();
//	Dice(const Dice &obj);
//	int getValue()const { return *this->maxValue; }
//};
//
//Dice::Dice(int value)
//{
//	this->maxValue = new int(value);
//}
//
//Dice::Dice(const Dice &obj)
//{
//	this->maxValue = new int(*obj.maxValue);
//}
//
//Dice::~Dice()
//{
//	delete this->maxValue;
//}
//
//int main()
//{
//	Dice d1(10);
//
//	Dice d2 = d1;
//
//	cout << d1.getValue() << endl;
//	cout << d2.getValue() << endl;
//
//	system("PAUSE");
//
//	return 0;
//}