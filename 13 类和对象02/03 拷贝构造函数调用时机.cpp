//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	int m_Age;
//
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ������" << endl;
//	}
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person��Ĭ�Ϲ������" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person�Ŀ����������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person�������������" << endl;
//	}
//
//
//};
//
//
////1.���������ĵ���ʱ��1������һ�����еĶ���������һ���µĶ���
////void test01()
////{
////	Person p1(10);
////	Person p2(p1);
////	cout << "p1������Ϊ��" <<p1.m_Age <<endl;
////	cout << "p2������Ϊ��" << p2.m_Age<<endl;
////
////}
//
////2.ֵ���ݵķ�ʽ������������ֵ
////void do_Work(Person p)
////{
////
////}
////void test02()
////{
////	Person p;
////	do_Work(p);//�ⲽҲ�ǵ����˿������캯��
////}
//
//
////3.ֵ��ʽ���ؾֲ�����
//Person do_Work()
//{
//	Person p1;
//	return p1;
//}
//void test03()
//{
//	Person p = do_Work();//����Ҳ����ÿ������캯��
//}
//int main3()
//{
//	/*test01();*/
//	/*test02();*/
//	test03();
//	system("pause");
//	return 0;
//}