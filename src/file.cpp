#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Write
	ofstream WriteFile("filename.txt");

	WriteFile << "Yaaaay!" << endl;

	WriteFile.close();

	// Read
	string _text;

	ifstream ReadFile("filename.txt");

	while (getline (ReadFile, _text))
	{
		cout << _text << endl;
	}

	ReadFile.close();

	return 0;
}
