#include<iostream>
using namespace std;

//const修饰成员函数
class Person
{
public:
	int m_A;
	mutable int m_B;//加mutable表示即使在常函数中也可以修改
	//this的本质是指针常量，指向不可以修改，但是指向的值可以修改
	// Person *const this 
	//在成员函数后面加const，修饰的是this指针，让指针指向的值也不能修改
	//加const后为常函数，相当于const Person *const this
	void showPersonA()const
	{
		//m_A = 10;
		this ->m_B = 20;//因为在声明时上面加了mutable

	}
	void func()
	{

	}
};


//常函数
void test01()
{
	Person p;
	p.showPersonA();
}


//常对象
void test02()
{
	const Person p;
	//p.m_A = 10;//不可以修改
	p.m_B = 20;//可以修改

	//常函数只能调用常函数
	p.showPersonA();//只能调用常函数

	//p.func();//不能调普通成员函数，因为常对象不可以修改普通属性，
	//但是普通成员函数可以
}
int main()
{
	test01();
	system("pause");
	return 0;
}