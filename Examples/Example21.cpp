//#include<iostream>
//#include<string>
//
//using namespace std;
//
////Constant GLOBAL variable
//const int MAX_CARS = 20;
//const int MAX_BIKES = 10;
//
//int addCar(string name = "Ford", double mileage = 25.0) //Default parameter
//{
//	static int nrOfCars = 0; //Static local variable
//	
//	if(nrOfCars < MAX_CARS)
//		++nrOfCars;
//
//	return nrOfCars;
//}
//
//int addBike(string name = "Kawasaki", double mileage = 10.0)
//{
//	static int nrOfBikes = 0; //Static local variable
//	
//	if(nrOfBikes < MAX_BIKES)
//		++nrOfBikes;
//
//	return nrOfBikes;
//}
//
//int main()
//{
//	int cars = 0;
//	int bikes = 0;
//
//	for (size_t i = 0; i < 30; i++)
//	{
//		cars = addCar();
//		bikes = addBike();
//
//		cout << "Cars: " << cars << endl;
//		cout << "Bikes: " << bikes << endl;
//	}
//
//	system("PAUSE");
//
//	return 0;
//}
