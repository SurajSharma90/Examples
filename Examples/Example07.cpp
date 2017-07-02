//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//
//	int distance = 0;
//	int choice = 0;
//	bool playing = true;
//
//	cout << "Rules: Bro pulls on rope while rope is being pulled back. \nChoose between light pull and hard pull, 1 (1-3) or 2 (1-6)." << endl;
//
//	while (playing == true)
//	{
//		cout << "Bro please input choice (1 or 2): ";
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:
//			distance -= rand() % 3;
//			distance += rand() % 3 + 1;
//			break;
//		case 2:
//			distance -= rand() % 3;
//			distance += rand() % 6 + 1;
//			break;
//		default:
//			cout << "BRO! WHAT IS U DOAN?!" << endl;
//			break;
//		}
//
//		cout << "Current distance: " << distance << endl;
//
//		if (distance >= 10 || distance <= -10)
//			playing = false;
//	}
//
//	if (distance == 10)
//		cout << "You WOND BRO! GZ!" << endl;
//	if (distance <= -10)
//		cout << "You LOSTED BRO SOZ!" << endl;
//	if (distance > 10)
//		cout << "You LOSTED, WENT TO FAAR BROWSKI!!" << endl;
//
//	system("PAUSE");
//
//	return 0;
//}