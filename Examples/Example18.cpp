//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//void menu(int &c, vector<string> &vec);
//void printAll(const vector<string> &vec);
//
//int main()
//{	
//	int choice = 0;
//	vector<string> names;
//
//	menu(choice, names);
//
//	while (choice > 0)
//	{
//		menu(choice, names);
//	}
//
//	system("PAUSE");
//
//	return 0;
//}
//
//void menu(int &c, vector<string> &vec)
//{
//	cout << "Input choice brah (0 quit, 1 add name, 2 remove last name, 3 print all): ";
//	cin >> c;
//
//	string tempName = "";
//
//	switch (c)
//	{
//	case 1: //Add
//		cin.ignore();
//		getline(cin, tempName);
//		vec.push_back(tempName);
//		cout << "Name added brah wooooohoooo!" << endl;
//		break;
//
//	case 2: //Remove
//		if (!vec.empty())
//			vec.pop_back();	
//		else
//			cout << "List is empty :/!" << endl;
//		break;
//
//	case 3: //Print
//		printAll(vec);
//		break;
//
//	default:
//		cout << "Wrong input mang!" << endl;
//		break;
//	}
//}
//
//void printAll(const vector<string> &vec)
//{
//	cout << "Printing all names yo!" << endl;
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout << i << ": " << vec[i] << endl;
//	}
//}