#include<iostream>
using namespace std;


//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա���������ܷ��ʷǾ�̬��Ա����
//��̬��Ա����Ҳ�з���Ȩ��
class Person
{
public:
	static int m_A;
	int m_B;//��̬��Ա�������ܷ���
	static void func1()
	{
		m_A = 20;
		cout << "ststic void func1�ĵ���" << endl;
	}

};
int Person::m_A = 10;

void test01()
{
	Person p;
	cout << p.m_A << endl;
	p.func1();//1.ͨ���������
	//2.ͨ����������
	Person::func1();

}
int main()
{
	test01();
	system("pause");
	return 0;
}