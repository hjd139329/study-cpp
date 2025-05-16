//#include<iostream>
//using namespace std;
//#include<string>
//
////1.指定传入类型(最常用)
////2.参数模板化
////3.整个类模板化
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
//		cout << "姓名：" << m_Name << "年龄：" << m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//
//};
//
//
////1.指定传入类型
//void printPerson1(Person<string, int>&p)
//{
//	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//}
//
////2.参数模板化
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//	cout << "T1的类型为：" << typeid(T1).name() << endl;
//	cout << "T2的类型为：" << typeid(T2).name ()<< endl;
//
//}
//
////3.整个类模板化
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T的类型为：" << typeid(T).name() << endl;
//}
//void test01()
//{
//	Person<string, int>p1("孙悟空", 900);
//	printPerson1(p1);
//	Person<string, int>p2("猪八戒", 700);
//	printPerson2(p2);
//	Person<string, int>p3("唐僧", 20);
//	printPerson3(p3);
//
//}
//int main10()
//{
//	test01();
//	system("pause");
//	return 0;
//}