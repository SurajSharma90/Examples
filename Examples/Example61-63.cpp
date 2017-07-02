//#include <iostream>
//#include <vector>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//int main()
//{
//
//	srand(time(NULL));
//
//	int choice = 0;
//	int roll = 0;
//	int total = 0;
//	int diceSize = 0;
//
//	vector<int> diceCollection;
//
//	cout << "0 - Quit\n1 - Add Dice\n2 - Remove Last\n3 - Roll\n: ";
//	cin >> choice;
//
//	while (choice > 0)
//	{
//		switch (choice)
//		{
//		case 1:
//			cout << "Dice size: ";
//			cin >> diceSize;
//
//			diceCollection.push_back(diceSize);
//			cout << "Dice added." << endl;
//			break;
//
//		case 2:
//			if (!diceCollection.empty()) {
//				diceCollection.pop_back();
//				cout << "Dice has been removed." << endl;
//			}
//			cout << "Dice is empty" << endl;
//			break;
//
//		case 3:
//			for (int i = 0; i < diceCollection.size(); i++) {
//				roll = rand() % diceCollection[i] + 1;
//				cout << i << ": " << roll << endl;
//				total += roll;
//			}
//			cout << "Total: " << total << endl;
//
//			break;
//
//		default:
//
//			break;
//		}
//	}
//
//	return 0;
//}