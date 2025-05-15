#include<iostream>
using namespace std;

//打印数据的函数

void printData(const int& ref)//加入const防止在函数体内误操作修改传入值
{
	//ref = 100;//违法操作。因为const修饰的不可以修改
	cout << "ref:" <<ref<< endl;

}
int main()
{
	int a = 10;
	//int& ref = 10;//错误的，因为必须引用合法的空间
	const int& ref = 10;//合法的，因为相当于编译器做了如下操作
	//int temp = 10; const int& ref = 10;
	//相当于编译器自己创建了一个常量temp=10；并且利用ref进行引用，但是我们看不到原名
	//只能知道别名ref

	printData(a);
	system("pause");
	return 0;
}