#include<iostream>
using namespace std;

int main10() 
{
	//continue在本次循环中跳过剩下的语句，执行下一次循环
	for (int i = 0; i <= 100; i++)
	{
		if (i%2 == 1)
		{
			continue;//可以筛选条件
		}
		cout << i << endl;
	}
	system("psuae");
	return 0;
}