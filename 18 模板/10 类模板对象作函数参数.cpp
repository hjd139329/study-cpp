//#include<iostream>
//using namespace std;
//#include<string>
//
////1.ָ����������(���)
////2.����ģ�廯
////3.������ģ�廯
//
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	void showPerson()
//	{
//		cout << "������" << m_Name << "���䣺" << m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//
//};
//
//
////1.ָ����������
//void printPerson1(Person<string, int>&p)
//{
//	cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
//}
//
////2.����ģ�廯
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
//	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//	cout << "T2������Ϊ��" << typeid(T2).name ()<< endl;
//
//}
//
////3.������ģ�廯
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T������Ϊ��" << typeid(T).name() << endl;
//}
//void test01()
//{
//	Person<string, int>p1("�����", 900);
//	printPerson1(p1);
//	Person<string, int>p2("��˽�", 700);
//	printPerson2(p2);
//	Person<string, int>p3("��ɮ", 20);
//	printPerson3(p3);
//
//}
//int main10()
//{
//	test01();
//	system("pause");
//	return 0;
//}