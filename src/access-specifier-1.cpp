#include <iostream>
using namespace std;

class Employee
{
	protected:
		int salary;
};

class Programmer : public Employee
{
	public:
		int bonus;
	
		void setSalary(int s)
		{
			salary = s;
		}
		int getSalary()
		{
			return salary;
		}
};

int main()
{
	Programmer obj;

	obj.setSalary(50000);
	obj.bonus = 15000;

	cout << "Salary: " << obj.getSalary() << "\n";
  cout << "Bonus: " << obj.bonus << "\n";

  return 0;
}
