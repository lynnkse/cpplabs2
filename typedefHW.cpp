#include <iostream>

using namespace std;

typedef unsigned short yar[30];
typedef bool(*foo)(double);

int main()
{
	yar y;
	
	cout << "Num of elements is " << sizeof(y)/sizeof(unsigned short) << endl;

	return 0;
}
