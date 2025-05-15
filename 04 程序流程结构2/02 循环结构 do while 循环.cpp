#include <iostream>
using namespace std;


int main2()
{
	
	//do while 循环，先执行一次，再判断是否满足循环条件
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);

	system("pause");
	return 0;

}