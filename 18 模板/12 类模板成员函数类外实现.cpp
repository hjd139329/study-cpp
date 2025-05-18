//#include<iostream>
//using namespace std;
//
////类模板成员函数的类外实现
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//		//this->m_Name = T1;
//		//this->m_Age = T2;
//
//	void showPerson();
//	//	cout << "name：" << this->m_Name << "age:" << this->m_Age << endl;
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//Person <T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//template<class T1, class T2>
//void Person<T1,T2>::showPerson()
//{
//	cout << "name：" << this->m_Name << "age:" << this->m_Age << endl;
//}
//void test01()
//{
//	Person <string, int>p("Tom", 18);
//	p.showPerson();
//}
//int main12()
//{
//	test01();
//	system("pause");
//	return 0;
//}