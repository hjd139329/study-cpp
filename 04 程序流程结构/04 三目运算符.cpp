#include<iostream>
using namespace std;

int main4()
{

	//表达式1 ？表达式2 ：表达式3
	//如果表达式1为真，返回表达式2的值，否则返回表达式3的值

	int a = 10;
	int b = 20;
	int c = 0;
	c = (a >= b ? a : b);
	cout << "a和b中最大的值为：" << c << endl;

	//注意，c++中三目运算符返回的是变量，可以继续赋值
	(a >= b ? a : b) = 100;//表达式左侧为b	
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;

}
