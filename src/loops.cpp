#include <iostream>
using namespace std;

int w = 0;
int nums[5] = { 10, 20, 50, 20, 99 };

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5)
		{
			break;
		}
	}

	cout << "=========" << endl;

	while (w < 5)
	{
		cout << w << endl;
		w++;
	}

	cout << "=========" << endl;

	for (int n : nums)
	{
		cout << n << "\n";
	}

	return 0;
}
