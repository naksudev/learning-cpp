#include <iostream>
#include <string>
using namespace std;


string food = "Pizza";
string &meal = food;

int main()
{
	cout << food << "\n";
	cout << meal << "\n";
	cout << &food << "\n"; // Memory address with &

	return 0;
}
