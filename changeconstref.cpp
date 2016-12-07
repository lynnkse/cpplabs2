#include <iostream>

using namespace std;

void FakeConstRef(const int& _ref)
{
	int* r = (int*)&_ref;
	*r = 9999;
}


int main()
{
	int num = 5;
	
	FakeConstRef(num);
	
	cout << num << endl;

	return 0;
}
