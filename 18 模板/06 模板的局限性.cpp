#include<iostream>
using namespace std;
#include<string>

//���þ��廯��ģ�����ʵ���Զ������͵�ͨ�û�
//ѧϰģ�岢����Ϊ��дģ�壬������STL������ϵͳ�ṩ��ģ��
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


//���þ��廯Person�İ汾ʵ�ֺ���ģ������Զ�����ıȽ�
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
	Person p1 = { "����", 18 };
	Person p2 = { "����", 19 };
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