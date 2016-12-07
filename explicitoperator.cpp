#include <iostream>

using namespace std;

int opeartorM(int a, int b) { return a*b; }
int opeartorD(int a, int b) { return a/b; }
int opeartorS(int a, int b) { return a-b; }
int opeartorMod(int a, int b) { return a%b; }

int main()
{
	if(5*7-18/3%4 == opeartorS(opeartorM(5, 7), opeartorMod(opeartorD(18, 3), 4)))
		cout << "Correct" << endl;
	else
		cout << "Incorrect" << endl;	
		
	return 0;
}
