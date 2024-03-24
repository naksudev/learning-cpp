#include <iostream>
using namespace std;

string food = "Lasagna";
string* ptr = &food;

int main()
{
	cout << food << endl;
	cout << &food << endl;

	// Reference
	cout << ptr << endl;

	// Dereference
	cout << *ptr << endl;


	*ptr = "Pizza";

	cout << *ptr << endl;
	cout << food << endl;

	return 0;
}
