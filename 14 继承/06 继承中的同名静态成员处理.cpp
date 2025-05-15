//#include<iostream>
//using namespace std;
//
//
////静态成员变量只有一份，所有同类成员共享
////静态成员函数只有一个函数实例，且只能访问静态成员变量
////静态成员变量和函数都有两种访问方式：一个类对象或者类名
//class Base
//{
//public:
//	static void func()
//	{
//		cout << "父类的func" << endl;
//	}
//	static void func(int)
//	{
//		cout << "父类的func(int)" << endl;
//	}
//	static int m_A ;//静态成员属性，类内声明，类外初始化
//};
//int Base::m_A = 100;//类外初始化
//
//class Son:public Base
//{
//public:
//	static void func()
//	{
//		cout << "子类的func" << endl;
//	}
//	static int m_A;
//};
//int Son::m_A = 200;
//
//
////静态成员变量
//void test01()
//{
//	Son s1;
//	
//	//1.通过对象访问静态成员变量	
//	//子类同名静态成员变量，直接访问
//	cout << "Son的A为：" << s1.m_A << endl;
//	//父类同名静态成员变量，加作用域
//	cout << "Base的A为：" << s1.Base::m_A << endl;
//	//2.通过类名访问静态成员变量
//	cout << "Son（类名）的A为：" << Son::m_A << endl;
//	//第一个：：代表通过类名访问，第二个表示访问父类的m_A
//	cout << "Base（类名）的A为：" << Son::Base::m_A << endl;
//}
//
////静态成员函数
//void test02()
//{
//	//通过对象访问静态成员函数
//	Son s2;
//	s2.func();
//	s2.Base::func();
//
//	//通过类名访问静态成员函数
//	Son::func();
//	Son::Base::func();
//
//	//要想访问父类中同名的重载函数，需要加作用域
//	//因为一旦有重名的函数，编译器会把父类的隐藏掉
//	s2.Base::func(100);
//}
//
//
//int main6()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}