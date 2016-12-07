#include <iostream>

using namespace std;

int main()
{
	int* num = new int(5);
	int& numref = *num;
	delete num;
	numref = 10;
		
	cout << *num << endl;
	cout << numref << endl;

	int* newnum = new int[500];

	cout << *num << endl;
	cout << numref << endl;

	delete[] newnum;

	return 0;
}
