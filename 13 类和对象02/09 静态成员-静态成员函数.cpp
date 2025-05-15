#include<iostream>
using namespace std;


//静态成员函数只能访问静态成员变量，不能访问非静态成员变量
//静态成员函数也有访问权限
class Person
{
public:
	static int m_A;
	int m_B;//静态成员函数不能访问
	static void func1()
	{
		m_A = 20;
		cout << "ststic void func1的调用" << endl;
	}

};
int Person::m_A = 10;

void test01()
{
	Person p;
	cout << p.m_A << endl;
	p.func1();//1.通过对象访问
	//2.通过类名访问
	Person::func1();

}
int main()
{
	test01();
	system("pause");
	return 0;
}