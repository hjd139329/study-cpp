#include<iostream>
using namespace std;

int main6()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	for(int i = 0;i<101;i++)\
	{
		a = i % 10;//个位
		b = i / 10;//十位

		if (a == 7)
		{
			cout << "敲桌子，此时i为：" << i << endl;
		}
		else if (b == 7)
		{
			cout << "敲桌子，此时i为：" << i << endl;
		}
		else if (i % 7 == 0 && i != 0) 
		{
			cout << "敲桌子，此时i为：" << i << endl;
		}

	}

	system("pause");
	return 0;

}