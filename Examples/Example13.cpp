//#include<iostream>
//#include<vector>
//#include<ctime>
//
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//
//	int choice = 0;
//	int roll = 0;
//	int total = 0;
//	int diceSize = 0;
//	vector<int> diceCollection;
//
//	cout << "Brah please choose (0 quit, 1 add dice, 2 remove last, 3 roll): ";
//	cin >> choice;
//
//	while (choice > 0)
//	{
//		switch (choice)
//		{
//		case 1:
//			cout << "Dice size: ";
//			cin >> diceSize;
//			diceCollection.push_back(diceSize);
//			cout << "Dice added wohoo!" << endl;
//			break;
//
//		case 2:
//			if (!diceCollection.empty())
//			{
//				diceCollection.pop_back();
//				cout << "Dice has been removed :(" << endl;
//			}
//			else
//				cout << "Dice array is empty!" << endl;
//			break;
//
//		case 3:
//			for (int i = 0; i < diceCollection.size(); i++)
//			{
//				roll = rand() % diceCollection[i] + 1;
//				cout << i << ": " << roll << endl;
//				total += roll;
//			}
//			cout << "Total: " << total << endl;
//			break;
//
//		default:
//			cout << "BRO WAT U DOIN WRONG INPUT MANG!" << endl;
//			break;
//		}
//
//		cout << "Brah please choose (0 quit, 1 add dice, 2 remove last, 3 roll): ";
//		cin >> choice;
//	}
//	
//	cout << "Program ending!" << endl;
//
//	system("PAUSE");
//
//	return 0;
//}
