//#include<iostream>
//
//using namespace std;
//
//class Wheel
//{
//private:
//	int inches;
//
//public:
//	Wheel(int inches = 20)
//	{
//		this->inches = inches;
//	}
//	~Wheel()
//	{
//
//	}
//
//	//Accessors
//	const int& getInches() const
//	{
//		return inches;
//	}
//
//	//Modifiers
//	void setInches(const int inches)
//	{
//		this->inches = inches;
//	}
//};
//
//class Car
//{
//private:
//	Wheel wheelLF;
//	Wheel wheelRF;
//	Wheel wheelLR;
//	Wheel wheelRR;
//
//public:
//	Car()
//	{
//		this->wheelLF = Wheel(22);
//		this->wheelRF = Wheel(24);
//		this->wheelLR = Wheel(26);
//		this->wheelRR = Wheel(28);
//	}
//	~Car()
//	{
//
//	}
//
//	const Wheel& getWheel(int index)
//	{
//		Wheel* wptr = nullptr;
//
//		switch (index)
//		{
//		case 1:
//			wptr = &this->wheelLF;
//			break;
//		case 2:
//			wptr = &this->wheelRF;
//			break;
//		case 3:
//			wptr = &this->wheelLR;
//			break;
//		case 4:
//			wptr = &this->wheelRR;
//			break;
//		default:
//			cout << "NO WHEEL ABOVE WHEEL 4 BRAH!" << endl;
//			break;
//		}
//
//		return *wptr;
//	}
//
//	Wheel& setWheel(int index)
//	{
//		Wheel* wptr = nullptr;
//
//		switch (index)
//		{
//		case 1:
//			wptr = &this->wheelLF;
//			break;
//		case 2:
//			wptr = &this->wheelRF;
//			break;
//		case 3:
//			wptr = &this->wheelLR;
//			break;
//		case 4:
//			wptr = &this->wheelRR;
//			break;
//		default:
//			cout << "NO WHEEL ABOVE WHEEL 4 BRAH!" << endl;
//			break;
//		}
//
//		return *wptr;
//	}
//};
//
//int main()
//{
//	Car crookedCar;
//
//	cout << crookedCar.getWheel(1).getInches() << endl;
//	cout << crookedCar.getWheel(2).getInches() << endl;
//	cout << crookedCar.getWheel(3).getInches() << endl;
//	cout << crookedCar.getWheel(4).getInches() << endl;
//
//	crookedCar.setWheel(1).setInches(30);
//	crookedCar.setWheel(4).setInches(38);
//
//	cout << crookedCar.getWheel(1).getInches() << endl;
//	cout << crookedCar.getWheel(2).getInches() << endl;
//	cout << crookedCar.getWheel(3).getInches() << endl;
//	cout << crookedCar.getWheel(4).getInches() << endl;
//
//	system("PAUSE");
//
//	return 0;
//}
