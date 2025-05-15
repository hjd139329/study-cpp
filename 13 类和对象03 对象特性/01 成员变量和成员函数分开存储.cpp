//#include<iostream>
//using namespace std;
//
////成员函数和成员变量分开存储
//
//class Person
//{
//	//空类占一个字节
//	//编译器会给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
//	
//	int m_A;//有一个int占四个字节
//	static int m_B;//静态成员不在对象上
//	void func(){}//非静态成员函数不在对象上
//	static void func2(){}//静态成员函数也不在对象上
//};
//int Person::m_B = 0;
//void test01()
//{
//	Person p;
//	cout << "size of Person ：" << sizeof(p) << endl;
//}
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}