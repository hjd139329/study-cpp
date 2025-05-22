//#include<iostream>
//using namespace std;
//
//
////建议直接使用类内实现
//
////2.类外实现
////1.先让编译器知道Person类的存在
//template<class T1, class T2>
//class Person;
////2.再让编译器知道类外实现
//template<class T1, class T2>
//void printPerson2(Person<T1,T2>p)
//{
//	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//}
//
//
//template<class T1, class T2>
//class Person
//{
//	//1.全局函数类内实现
//	//friend void printPerson(Person<T1, T2>p)
//	//{
//	//	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;//这里为什么不出现成员
//	//}
//	//2.类外实现
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