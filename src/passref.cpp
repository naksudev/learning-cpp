// Pass By Reference

#include <iostream>
using namespace std;

void swapNums(int &x, int &y) // The important part
{
	int z = x;
	x = y;
	y = z;
}

int main()
{
	int n = 10;
	int l = 50;

	cout << "Before swap: " << endl;
	cout << n << l << endl;
	
	swapNums(n, l);

	cout << "After swap: " << endl;
	cout << n << l << endl;

	return 0;
}
