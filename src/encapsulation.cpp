#include <iostream>
using namespace std;

class Employee
{
	private:
		int salary;

	public:
		// Setter
		void setSalary(int s)
		{
			salary = s;
		}	
	
		// Getter
		int getSalary()
		{
			return salary;
		}
};

int main()
{
	Employee emp1;

	emp1.setSalary(10000);

	cout << emp1.getSalary() << endl;

	return 0;
}
