#include <iostream>

using namespace std;

int main()
{
	int i = 5;
	
	if(++i == i++) 
		cout << "Equal" << endl; 
	else
		cout << "Not equal" << endl; 

	return 0;
}
