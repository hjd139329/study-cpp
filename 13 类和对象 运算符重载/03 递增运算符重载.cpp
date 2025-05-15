//#include<iostream>
//using namespace std;
//
////递增运算符重载
////1.前置递增和后置递增在定义时要区分，可以通过int占位参数实现
////2.前置递增返回引用，后置递增返回值
//
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, const MyInteger& myint);
//
//public:
//	MyInteger()
//	{
//		m_A = 0;
//	}
//
//	//前置递增重载
//	//在返回 MyInteger 类时，要返回引用，确保对一个数据进行操作
//	MyInteger& operator++()
//	{
//		m_A++;//先进行++操作
//		return *this;//再返回
//	}
//	//后置递增重载
//	//在返回 MyInteger 类时，要返回值
//	//因为返回的是temp，而temp是临时变量，再结束时会销毁，不可以再引用
//	MyInteger operator++(int)//int表示占位参数，在这里用于区分前置和后置
//	{
//		//先记录当前值
//		MyInteger temp = *this;
//		//++操作
//		m_A++;
//		//返回记录的值
//		return temp;
//	}
//private:
//	int m_A;
//};
//
////左移运算符重载
//ostream& operator<<(ostream& cout, const MyInteger& myint)//myint不需要修改
//{
//	cout << myint.m_A;
//	return cout;
//}
//
//
////前置++，先++再返回
//void test01()
//{
//	MyInteger myint;
//
//	cout << ++myint << endl;
//	cout << myint << endl;
//}
//
//
////后置++，先返回再++
//void test02()
//{
//	MyInteger myint2;
//	cout << myint2++ << endl;
//	cout << myint2 << endl;
//}
//int main3()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}