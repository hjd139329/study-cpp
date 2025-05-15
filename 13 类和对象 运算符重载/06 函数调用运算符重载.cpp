#include<iostream>
using namespace std;


//重载函数调用运算符（）
//重载的（）写法很灵活

class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test01()
{
	MyPrint myFunc;//重载的（）非常像函数，所以也成为仿函数
	myFunc("hello,word");
}

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myadd;
	int ret = myadd(10, 20);
	cout << "ret:" << ret << endl;

	//匿名对象调用
	cout << MyAdd()(100, 20) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
