//#include<iostream>
//using namespace std;
//
//
////����ֱ��ʹ������ʵ��
//
////2.����ʵ��
////1.���ñ�����֪��Person��Ĵ���
//template<class T1, class T2>
//class Person;
////2.���ñ�����֪������ʵ��
//template<class T1, class T2>
//void printPerson2(Person<T1,T2>p)
//{
//	cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
//}
//
//
//template<class T1, class T2>
//class Person
//{
//	//1.ȫ�ֺ�������ʵ��
//	//friend void printPerson(Person<T1, T2>p)
//	//{
//	//	cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;//����Ϊʲô�����ֳ�Ա
//	//}
//	//2.����ʵ��
//	friend void printPerson2<>(Person<T1, T2>p);
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	
//	T1 m_Name;
//	T2 m_Age;
//};
//
//void test01()
//{
//	//Person <string, int>p("Tom", 14);
//	//printPerson(p);
//}
//
//void test02()
//{
//	Person <string, int>p("Tom", 15);
//	printPerson2(p);
//}
//int main14()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}