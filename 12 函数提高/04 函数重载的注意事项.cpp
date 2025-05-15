#include<iostream>
using namespace std;

//引用也可以作为函数重载的条件，可以用const作区分
void func(int &a)
{
	cout << "int &a" << endl;

}
void func(const int &a)//
{
	cout << "const int &a" << endl;
}

//函数重载碰到默认参数
//但是当只写只传递一个参数时，如果有一个重载函数的存在第二个参数
//且第二个参数设置了默认参数。那么不可以调用
//func(int a)
//func(int a, int = 10)
//func(10)
//上面这种情况不可以调用
void func2(int a)
{
	cout << "func2-int" << endl;
}

void func2(int a, int b)
{
	cout << "func2-a-b" << endl;
}
int main()
{
	int a = 20;
	func(a);//这里调用不加const的参数
	func(10);//调用有const函数
	func2(10);

	func2(10, 20);
	system("pause");
	return 0;
}