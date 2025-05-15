//#include<iostream>
//using namespace std;
//
//
//
////一个子类可以继承多个父类，
////语法：class 子类 ：继承方式 父类，继承方式 父类 .....
//class Base1
//{
//public:
//	int m_A = 100;
//
//};
//class Base2
//{
//public:
//	int m_A = 200;
//};
//
//
//class Son :public Base1, public Base2
//{
//public:
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	Son s1;
//	//当父类出现多个重名时，加上作用域进行某个父类成员的访问
//	cout << "Base1的A:" << s1.Base1::m_A << endl;
//	cout << "Base2的A:" << s1.Base2::m_A << endl;
//}
//int main7()
//{
//	test01();
//	system("pause");
//	return 0;
//}