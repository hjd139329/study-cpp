#include <iostream>
using namespace std;


/*
常量的两种定义方法
1.
#define 宏常量
2.
const 修饰的变量

*/
//1.第一种定义方式
#define day 7


int main1()
{
	cout << "一周共有：" << day <<"天"<< endl;
	//2.const修饰的常量
	const int month = 12;
	cout << "一年共有：" << month << "月" << endl;

	system("pause");
	return 0;

}