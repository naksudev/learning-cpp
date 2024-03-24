#include <iostream>
using namespace std;

class Animal 
{
	public:
		void animalSound()
		{
			cout << "The animal makes a sound" << endl;
		}
};

class Pig : public Animal 
{
	public:
		void animalSound()
		{
			cout << "The pig says: wee wee" << endl;
		}
};

class Dog : public Animal
{
	public:
		void animalSound()
		{
			cout << "The dog says: bow wow" << endl;
		}
};

int main()
{
	Animal _animal;
	Pig _pig;
	Dog _dog;

	_animal.animalSound();
	_pig.animalSound();
	_dog.animalSound();

	return 0;
}
