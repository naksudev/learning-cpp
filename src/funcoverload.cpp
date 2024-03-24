#include <iostream>
using namespace std;

// We can use the same functions that works for 2 types of data
// See below.

int plusFunc(int x, int y)
{
	return x + y;
}

double plusFunc(double x, double y)
{
	return x + y;
}

int main()
{
	int myNum1 = plusFunc(8, 5);
	double myNum2 = plusFunc(5.3, 3.55);

	cout << "Int: " << myNum1 << endl;
	cout << "Double: " << myNum2 << endl;

	return 0;
}
