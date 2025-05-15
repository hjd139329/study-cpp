#include<iostream>
using namespace std;

int main1()
{
	//定义指针
	int a = 10;
	int* p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "p的值为：" << p << endl;


	//指针的解引用
	*p = 1000;
	cout << a << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}