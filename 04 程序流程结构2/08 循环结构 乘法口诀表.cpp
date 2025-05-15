#include<iostream>
using namespace std;
int main8()
{

	int i = 1;
	int j = 1;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << i * j<<"  ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}