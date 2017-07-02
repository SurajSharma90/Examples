//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	int choice = 0;
//	const unsigned sizeOfArray = 10;
//	unsigned nrOfPeople = 0;
//	string peopleArray[sizeOfArray];
//	int peopleSalary[sizeOfArray];
//
//	//Initialize
//	for (int i = 0; i < sizeOfArray; i++)
//	{
//		peopleArray[i] = "";
//		peopleSalary[i] = 0;
//	}
//
//	//Program loop
//
//	cout << "Bro choice plz (0 quit, 1 add, 2 remove last, 3 print all): ";
//	cin >> choice;
//
//	while (choice > 0)
//	{
//		switch (choice)
//		{
//		case 1: //Add
//			if (nrOfPeople < sizeOfArray)
//			{
//				cin.ignore();
//				cout << "Input name of bro: ";
//				getline(cin, peopleArray[nrOfPeople]);
//				cout << "Input salary for bro: ";
//				cin >> peopleSalary[nrOfPeople];
//
//				nrOfPeople++;
//
//				cout << "Person was added wohooo!" << endl;
//			}
//			else
//			{
//				cout << "List is full soz mang!" << endl;
//			}
//			break;
//		case 2: //Remove last
//			if (nrOfPeople > 0)
//			{
//				nrOfPeople--;
//				cout << "Person was exterminated!" << endl;
//			}
//			else
//			{
//				cout << "List was empty :( !" << endl;
//			}
//			break;
//		case 3: //Print
//			for (int i = 0; i < nrOfPeople; i++)
//			{
//				cout << i << ": " << "Name: " << peopleArray[i] << " Salary: " << peopleSalary[i] << endl;
//			}
//			break;
//		default:
//			cout << "Wrong input brah!" << endl;
//			break;
//		}
//
//		cout << "Bro choice plz (0 quit, 1 add, 2 remove last, 3 print all): ";
//		cin >> choice;
//	}
//
//	system("PAUSE");
//
//	return 0;
//}
