//#include<iostream>
//using namespace std;
//#include"person.hpp"
//
////主流使用第二种
////类模板分文件编写
//// 1.包含源文件
//// 2.将.cpp和.h文件内容写在一起，将后缀改为.hpp，包含".hpp"文件
//
//
//
////template<class T1, class T2 >
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->m_Name = name;
////	this->m_Age = age;
////}
////
////template<class T1, class T2>
////void Person<T1, T2>::show_Person()
////{
////	cout << "姓名：" << this->m_Name << "  年龄：" << this->m_Age << endl;
////}
//
//void test01()
//{
//	Person <string, int>p("Tom", 13);
//	p.show_Person();
//}
//int main13()
//{
//	test01();
//	system("pause");
//	return 0;
//}