#include <iostream>
using namespace std;

class MyClass
{
	public:
		void myFunction()
		{
			cout << "Content from a parent class" << endl;
		}
};

class MyChild: public MyClass {};

class MyGrandChild: public MyChild {};

int main()
{
	MyGrandChild myObj;

	myObj.myFunction();

	return 0;
}
