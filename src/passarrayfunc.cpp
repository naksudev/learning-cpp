// Pass Array to a Function

#include <iostream>
using namespace std;

void outputArr(int arr[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int nums[5] = { 10, 3, 5, 29, 34 };
	outputArr(nums);

	return 0;
}
