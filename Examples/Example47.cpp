//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Item
//{
//private:
//	string description;
//
//public:
//	Item(string description = "NONE")
//	{
//		this->description = description;
//	}
//
//	~Item()
//	{
//
//	}
//
//	const string& getDesc() const
//	{
//		return this->description;
//	}
//};
//
//class Wheel
//{
//private:
//	int size;
//
//public:
//	Wheel(int size = 24)
//	{
//		this->size = size;
//	}
//
//	~Wheel()
//	{
//
//	}
//
//	const int& getSize() const
//	{
//		return this->size;
//	}
//};
//
//class Truck
//{
//private:
//	string name;
//	Wheel *wheelLF;
//	Wheel *wheelRF;
//	Wheel *wheelLR;
//	Wheel *wheelRR;
//
//	int cap;
//	int nrOfItems;
//	Item **inventory;
//
//public:
//	Truck(string name = "NONE")
//	{
//		this->name = name;
//		this->wheelLF = new Wheel(24);
//		this->wheelRF = new Wheel(24);
//		this->wheelLR = new Wheel(24);
//		this->wheelRR = new Wheel(24);
//
//		this->cap = 20;
//		this->nrOfItems = 0;
//		this->inventory = new Item*[cap];
//	}
//
//	~Truck()
//	{
//		delete this->wheelLF;
//		delete this->wheelRF;
//		delete this->wheelLR;
//		delete this->wheelRR;
//
//		for (size_t i = 0; i < this->nrOfItems; i++)
//		{
//			delete this->inventory[i];
//		}
//		delete[] this->inventory;
//	}
//
//	const Wheel& getWheelLF() { return *this->wheelLF; }
//	const Wheel& getWheelRF() { return *this->wheelRF; }
//	const Wheel& getWheelLR() { return *this->wheelLR; }
//	const Wheel& getWheelRR() { return *this->wheelRR; }
//
//	string getTruckInfo() const
//	{
//		return "Name: " + this->name + "\n"
//			+ "Wheels: " + "\n"
//			+ "LF: " + to_string(this->wheelLF->getSize()) + "\n"
//			+ "RF: " + to_string(this->wheelRF->getSize()) + "\n"
//			+ "LR: " + to_string(this->wheelLR->getSize()) + "\n"
//			+ "RR: " + to_string(this->wheelRR->getSize()) + "\n";
//	}
//
//	void addItem()
//	{
//		if (this->nrOfItems < this->cap)
//		{
//			string desc = "";
//			cin.ignore();
//			getline(cin, desc);
//
//			this->inventory[this->nrOfItems++] = new Item(desc);
//			cout << "ITEM ADDED!" << "\n";
//		}
//		else
//			cout << "INVENTORY FULL!" << "\n";
//	}
//
//	void printInventory() const
//	{
//		for (size_t i = 0; i < this->nrOfItems; i++)
//		{
//			cout << i << ": " << inventory[i]->getDesc() << "\n";
//		}
//	}
//};
//
//void menu(int &choice, Truck &truck)
//{
//	string tempItem = "";
//
//	switch (choice)
//	{
//	case 1:
//		truck.addItem();
//		break;
//
//	case 2:
//		truck.printInventory();
//		break;
//
//	case 3:
//		cout << truck.getTruckInfo() << "\n";
//		break;
//
//	default:
//		cout << "WRONG INPUT BRAH!" << "\n";
//		break;
//	}
//
//	cout << "Menu" << "\n";
//	cout << "1: Add item" << "\n";
//	cout << "2: Print Inventory" << "\n";
//	cout << "3: Get truck info" << "\n" << "\n";
//	cout << "Choice: ";
//	cin >> choice;
//
//}
//
//int main()
//{
//	int choice = 0;
//	Truck truck;
//
//	menu(choice, truck);
//
//	while (choice > 0)
//	{
//		menu(choice, truck);
//	}
//
//	system("PAUSE");
//
//	return 0;
//}
