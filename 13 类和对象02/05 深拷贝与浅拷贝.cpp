//#include<iostream>
//using namespace std;
//
////�������Լ������Ŀ�������ʱǳ���������ͷ�new�����Ŀռ�ʱ���ظ��ͷ�
////��������Ҫ�Լ���������������ʹ������������ظ��ͷ�ͬһƬ�ڴ�ռ�
//class Person
//{
//public:
//	int m_Age;
//	int* m_Height;//����ָ����ߵ�ָ��
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);//new���ص���ָ�룬������Ҫ��ָ�����
//		cout << "�вι��캯���ĵ���" << endl;
//	}
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height//������Ĭ��ʵ�����д���
//		//�Լ�д��ʵ�����
//		m_Height = new int(*p.m_Height);//�����ʹ��new���¿��ٿռ�
//
//		cout << "�������캯���ĵ���" << endl;
//	}
//	~Person()
//	{
//		//�������ٵ����ݣ�һ���������������ͷ�
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "������������" << endl;
//	}
//};
//
//void test01()
//{
//	Person p1(18, 170);
//	cout << "p1������Ϊ��" << p1.m_Age << "���Ϊ��" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}