#include <iostream>
using namespace std;

string firstName = "Faiz";
string lastName = "Madarsah";
string fullName = firstName.append(lastName);

int main()
{
	cout << "The length of the firstName string: " << firstName.length() << endl;
	cout << firstName[0] << endl;

	cout << "Type your full name: ";
	getline (cin, fullName);
	cout << "So your name is: " << fullName;

	return 0;
}
