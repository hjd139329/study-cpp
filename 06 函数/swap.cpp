#include"swap.h"//告诉编译器，和头文件<swap.h>配套

//函数定义
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a：" << a << endl ;
	cout << "b：" << b << endl ;

}