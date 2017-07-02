//#include<iostream>
//#include<vector>
//#include<string>
//#include<ctime>
//
//using namespace std;
//
//void resetVec(vector<string> &colVec, vector<string> colCont)
//{
//	colVec.clear();
//	int index = 0;
//
//	while (!colCont.empty())
//	{
//		index = rand() % colCont.size();
//		colVec.push_back(colCont[index]);
//		colCont.erase(colCont.begin() + index);
//	}
//}
//
//void makeCapital(string &str)
//{
//	for (size_t i = 0; i < str.size(); i++)
//	{
//		str[i] = toupper(str[i]);
//	}
//}
//
//int main()
//{
//	srand(time(NULL));
//
//	const vector<string> colCont = { "RED", "GREEN", "BLUE" };
//	vector<string> colVec;
//
//	int points = 0;
//	string colChoice = "";
//
//	cout << "Choice brah (QUIT, PLAY): ";
//	cin >> colChoice;
//	makeCapital(colChoice);
//
//	while (colChoice != "QUIT")
//	{
//		if (colChoice == "PLAY")
//		{
//			resetVec(colVec, colCont);
//
//			for (size_t i = 0; i < colVec.size(); i++)
//			{
//				cout << "Guess color " << i << ": ";
//				cin >> colChoice;
//				makeCapital(colChoice);
//
//				if (colChoice == colVec[i])
//				{
//					points++;
//					cout << "Correct! +1 points!" << endl;
//				}
//				else
//					cout << "Wrong!" << endl;
//			}
//
//			cout << "Game ended, you have " << points << " points!" << endl;
//		}
//
//		cout << "Choice brah (QUIT, PLAY): ";
//		cin >> colChoice;
//		makeCapital(colChoice);
//	}
//
//	system("PAUSE");
//
//	return 0;
//}
