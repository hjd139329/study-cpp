//#include<iostream>
//using namespace std;
//
////静态成员变量
//
////1.所有对象共享一份数据
////2.在编译阶段分配内存
////3.类内声明，类外初始化
//class Person
//{
//public:
//	static int m_A;//加了static为静态成员变量，所有该类的元素的m_A都为同一个值
//
//private:
//	static int m_B;//静态成员变量也是有访问权限的
//};
//int Person::m_A = 10;
//void test01()
//{
//	Person p1;
//	//p.m_A = 10;
//	Person p2;
//	p2.m_A = 100;
//	cout << p1.m_A << endl;
//}
//void test02()
//{
//	//静态成员变量不属于任何一个对象上，所有对象共享
//	//1.通过对象访问
//	Person p;
//	cout << p.m_A << endl;
//	//2.通过类名访问
//	cout << Person::m_A << endl;
//}
//int main8()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}