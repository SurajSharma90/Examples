#include<iostream>
#include"dArr.h"

using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


	dArr<int> ints;

	ints.push(20); //0
	ints.push(10);
	ints.push(10);
	ints.push(10);
	ints.push(10);
	ints.push(10);
	ints.push(40); //6
	ints.push(10);
	ints.push(10);
	ints.push(10);
	ints.push(10);
	ints.push(30); //11

	cout << ints[0] << " " << ints[6] << " " << ints[11] << "\n\n";

	for (size_t i = 0; i < ints.size(); i++)
	{
		cout << ints[i] << "\n";
	}

	cout << "\n";

	ints.remove(11);
	ints.remove(0);
	ints.remove(5);

	for (size_t i = 0; i < ints.size(); i++)
	{
		cout << ints[i] << "\n";
	}

	cout << "\n";

	ints.push(200);

	cout << ints[ints.size() - 1] << "\n\n";

	system("PAUSE");

	return 0;
}