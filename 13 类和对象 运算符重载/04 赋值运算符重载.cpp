//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	int *m_Age;
//	Person(int age)
//	{
//		m_Age = new int (age);
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//
//		}
//	}
//
//	//��ֵ���������
//	Person& operator=(Person &p)
//	{
//
//		//���ж��Ƿ��������ٶ���������У����ͷŸɾ�
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//
//	p3 = p2 = p1;//�������Լ��ṩ����ǳ����
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
//}
//int main4()
//{
//	test01();
//	system("pause");
//	return 0;
//}