//#include<iostream>
//using namespace std;
//
//
////规则：
////1.父类中私有的内容，不管什么继承方式子类都访问不到
////2.三种继承方式
////a.公共继承：除私有属性外，其余全部继承父类，且权限不变
////b.保护继承：除私有属性外，其余全部继承父类，但权限变为保护权限
////c.私有继承：除私有属性外，其余全部继承父类，但权限变为私有权限
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////1.公共继承
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类公共，子类还是公共
//		m_B = 200;//父类保护，子类保护
//		//m_C = 300;//父类私有成员，子类访问不到
//	}
//};
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 200;//父类公共，子类公共，类外可以访问
//	//s1.m_B = 23;//父类保护，子类保护，类外不可以访问
//}
//
//
//
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////保护继承
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类公共，子类保护
//		m_B = 200;//父类保护，子类保护
//		//m_C = 300;//父类私有成员，子类访问不到
//	}
//};
//
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 200; //父类公共，子类保护,类外不可以访问
//	//s2.m_B = 23;//父类保护，子类保护， 类外不可以访问
//
//}
//
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////私有继承
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类公共，子类私有
//		m_B = 200;//父类保护，子类私有
//		//m_C = 300;//父类私有成员，子类访问不到
//	}
//};
//
//void test03()
//{
//	Son3 s3;
//	//s3.m_A = 200; //父类公共，子类私有,类外不可以访问
//	//s3.m_B = 23;//父类保护，子类私有， 类外不可以访问
//
//}
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 1000;
//		//因为Son3是私有继承的父类3，所以所有成员变为私有，导致GrandSon无法继承任何成员
//	}
//};
//int main2()
//{
//	system("pause");
//	return 0;
//}