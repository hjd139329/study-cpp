//#include<iostream>
//using namespace std;
//
//
//class Base
//{
//public:
//
//	void func()
//	{
//		cout << "父类的func函数" << endl;
//	}
//	void func(int)
//	{
//		cout << "父类的func函数（int）" << endl;
//	}
//	int m_A = 100;
//};
//
//class Son :public Base
//{
//public:
//	int m_A = 200;
//	void func()
//	{
//		cout << "子类的func函数" << endl;
//	}
//};
//
//void test01()
//{
//	Son s1;
//	cout << "Son的m_A:" << s1.m_A << endl;//访问子类中的同名成员，直接访问
//	cout << "Base的m_A:" << s1.Base::m_A << endl;//要访问父类中的同名成员，加作用域
//	s1.func();//访问子类中的同名函数，直接访问
//	s1.Base::func();//访问父类的同名函数，加作用域
//
//
//	//这样会报错，因为编译器在发现子类和父类有同名成员时，会把父类的全部同名隐藏掉
//	//s1.func(100);
//	
//	//如果想要访问父类中的同名重载函数，加作用域
//	s1.Base::func(100);
//
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}