#include <iostream>
using namespace std;

class MyClass
{
	public:
		void myFunc() 
		{
			cout << "Some content in parent class." << endl;
		}
};

class MyOtherClass 
{
	public:
		void myOtherFunc()
		{
			cout << "Some content in another class." << endl;
		}
};

class ChildClass: public MyClass, public MyOtherClass {};

int main()
{
	ChildClass obj;

	obj.myFunc();
	obj.myOtherFunc();

	return 0;
}
