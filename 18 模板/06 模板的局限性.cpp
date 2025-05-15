#include<iostream>
using namespace std;
#include<string>

//利用具体化的模板可以实现自定义类型的通用化
//学习模板并不是为了写模板，而是在STL中运用系统提供的模板
class Person
{
public:
	string m_Name;
	int m_Age;
};

template<typename T>
bool myCompare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//利用具体化Person的版本实现函数模板对于自定义类的比较
template<> bool myCompare(Person& a, Person& b)
{
	if (a.m_Age == b.m_Age && a.m_Name == b.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	int a = 10;
	int b = 20;
	if (myCompare(a, b))
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

void test02()
{
	Person p1 = { "张三", 18 };
	Person p2 = { "张三", 19 };
	if (myCompare(p1, p2))
	{
		cout<<"p1==p2"<<endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}