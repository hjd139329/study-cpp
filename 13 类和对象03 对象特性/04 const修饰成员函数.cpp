#include<iostream>
using namespace std;

//const���γ�Ա����
class Person
{
public:
	int m_A;
	mutable int m_B;//��mutable��ʾ��ʹ�ڳ�������Ҳ�����޸�
	//this�ı�����ָ�볣����ָ�򲻿����޸ģ�����ָ���ֵ�����޸�
	// Person *const this 
	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�����޸�
	//��const��Ϊ���������൱��const Person *const this
	void showPersonA()const
	{
		//m_A = 10;
		this ->m_B = 20;//��Ϊ������ʱ�������mutable

	}
	void func()
	{

	}
};


//������
void test01()
{
	Person p;
	p.showPersonA();
}


//������
void test02()
{
	const Person p;
	//p.m_A = 10;//�������޸�
	p.m_B = 20;//�����޸�

	//������ֻ�ܵ��ó�����
	p.showPersonA();//ֻ�ܵ��ó�����

	//p.func();//���ܵ���ͨ��Ա��������Ϊ�����󲻿����޸���ͨ���ԣ�
	//������ͨ��Ա��������
}
int main()
{
	test01();
	system("pause");
	return 0;
}