#include<iostream>
using namespace std;

int main1 ()
{
	//前置递增，先+1，再进行运算
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;
	//后置递增，先进行运算，再+1；
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;



	system("pause");
	return 0;
}