#include <iostream>
using namespace std;

class RandomClass
{
	public:
		int x;
	private:
		int y;

	string str;
};

int main()
{
	RandomClass obj;

	obj.x = 35;
	obj.y = 10;
	obj.str = "By default, members of a class are PRIVATE.";

	return 0;
}
