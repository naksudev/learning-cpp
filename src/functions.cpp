#include <iostream>
using namespace std;

void kill(string fname, int age)
{
	cout << "I killed " << fname << " when he was " << age << endl;
}

int sum(int x)
{
	return 5 + x;
}

int main()
{
	kill("Naksu", 19);
	kill("Nyfra", 2);

	cout << sum(6) << endl;

	return 0;
}
