//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//class Dice
//{
//private:
//	int maxValue;
//
//public:
//	Dice(int maxValue = 4)
//	{
//		this->maxValue = maxValue;
//	}
//
//	~Dice()
//	{
//
//	}
//
//	int toss() const
//	{
//		return rand() % this->maxValue;
//	}
//
//	const int& getMaxValue() const
//	{
//		return this->maxValue;
//	}
//};
//
//void mainMenu(int &choice, Dice **diceArr, const int &cap, int &nrOfDice)
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//
//	int totalVal = 0;
//	int maxVal = 0;
//
//	switch (choice)
//	{
//	case 1: //Add dice
//		cout << "Input max value for dice: ";
//		cin >> maxVal;
//
//		if (nrOfDice < cap)
//		{
//			diceArr[nrOfDice++] = new Dice(maxVal);
//		}
//		break;
//
//	case 2: //Get max value for all dice
//		for (size_t i = 0; i < nrOfDice; i++)
//		{
//			cout << i << ": " << diceArr[i]->getMaxValue() << "\n";
//		}
//		break;
//
//	case 3: //Toss all dice and get the total
//		for (size_t i = 0; i < nrOfDice; i++)
//		{
//			totalVal += diceArr[i]->toss();
//		}
//		cout << "Total value of all dice: " << totalVal << "\n";
//		break;
//
//	default:
//		cout << "Wrong input brah!" << "\n";
//		break;
//	}
//
//	cout << "Menu" << "\n";
//	cout << "1: Add dice" << "\n";
//	cout << "2: Show dice" << "\n";
//	cout << "3: Toss all dice" << "\n" << "\n";
//	cout << "Choice: ";
//	cin >> choice;
//}
//
//int main()
//{
//	srand(time(static_cast<unsigned>(0)));
//
//	int cap = 10;
//	int nrOfDice = 0;
//	Dice **diceArr = new Dice*[cap];
//
//	int choice = 0;
//
//	mainMenu(choice, diceArr, cap, nrOfDice);
//
//	while (choice > 0)
//	{
//		mainMenu(choice, diceArr, cap, nrOfDice);
//	}
//
//	//DELETE FINAL
//	for (size_t i = 0; i < nrOfDice; i++)
//	{
//		delete diceArr[i];
//	}
//	delete [] diceArr;
//
//	system("PAUSE");
//
//	return 0;
//}
