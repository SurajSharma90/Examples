//#include<iostream>
//#include<vector>
//#include<ctime>
//
//using namespace std;
//
//class Dice
//{
//private:
//	int *value;
//
//public:
//	Dice(int value) { this->value = new int(value); }
//	
//	Dice(const Dice &obj) 
//	{
//		this->value = new int(*obj.value);
//	}
//
//	void operator = (const Dice &obj)
//	{
//		delete this->value;
//
//		this->value = new int(*obj.value);
//	}
//
//	~Dice() { delete this->value; }
//
//	//FUNCTIONS
//	inline const int& getValue() { return *this->value; }
//	inline void setValue(int value) { *this->value = value; }
//	inline int toss() { return rand() % *this->value + 1; }
//};
//
//int main()
//{
//	srand(time(0));
//	
//	vector<Dice> dice;
//
//	for (size_t i = 0; i < 20; i++)
//	{
//		dice.push_back(20);
//		cout << dice[i].toss() << "\n";
//	}
//
//	system("PAUSE");
//
//	return 0;
//}