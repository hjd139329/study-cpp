#include<iostream>
using namespace std;

int main5()
{


	//for循环
	int i = 0;
	for (i = 0; i <= 10; )//三个表达式都可以不写
	{
		cout << i << endl;
		i++;
	}
	cout << i << endl;//注意。最后的i为11

	system("pause");
	return 0;
}