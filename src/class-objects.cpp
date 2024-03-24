#include <iostream>
using namespace std;

class Car
{
	public: // Access specifier
		string brand;
		string model; 
		int year; // Attribute
		int speed(int maxSpeed); // Method/Function

		Car(string x, string y, int z) // Constructor 
		{
			brand = x;
			model = y;
			year = z;
		}
};

int Car::speed(int maxSpeed)
{
	return maxSpeed;
}

int main()
{
	Car car1("BMW", "X5", 1999);
	Car car2("Ford", "Mustang", 1969);

	cout << car1.brand << " " << car1.model << " " << car1.year << " " << car1.speed(200) << endl;
	cout << car2.brand << " " << car2.model << " " << car2.year << " " << car2.speed(180) << endl;

	return 0;
}
