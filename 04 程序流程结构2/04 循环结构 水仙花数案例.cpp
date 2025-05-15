#include<iostream>
using namespace std;


int main4()
{
	//水仙花数是指一个三位数，它的每个位上的数字的三次幂之和等于它本身
	//例如1^3+5^3+3^3=153
	//求解所有的水仙花数

	int i = 100;
	int a = 0;//个位
	int b = 0;//十位
	int c = 0;//百位
	
	do
	{
		a = i % 10;//个位
		b = i / 10 % 10;//十位
		c = i / 100;//百位
		if (a*a*a+b*b*b+c*c*c==i)
		{
			cout << i << endl;
		}
		i++;
	} while (i < 1000);

	system("pause");
	return 0;
}