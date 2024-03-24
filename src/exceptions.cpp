#include <iostream>
using namespace std;

int main()
{
	try {
		int age = 20;

		if (age >= 18) {
			cout << "Acces granted - you are old enough" << endl;
		} else {
			throw(age);
		}
	} catch (int num) {
		cout << "Access denied - You must be at least 18 y/o" << endl;
		cout << "Age is: " << num << endl;
	}

	// throw 505 - Using a keyword
	// catch (...) - Handle any type of exceptions

	return 0;
}
