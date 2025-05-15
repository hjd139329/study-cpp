//#include<iostream>
//using namespace std;
//
//1.一般利用全局函数重载左移运算符
//2.在返回ostream时，要返回引用以满足链式编程
////左移运算符重载可以输出自定义类型
//class Person
//{
//	friend ostream & operator<<(ostream &cout, Person &p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//	int m_A;
//	int m_B;
//
//};
//
////一般利用全局函数重载左移运算符
//ostream & operator<<(ostream &cout, Person &p)//第一个&必须有
//{
//	cout << "p.m_A=" << p.m_A << "  p.m_B=" << p.m_B;
//	return cout;
//}
//
//void test01()
//{
//	Person p(10, 20);
//	cout << p<<endl;
//}
//int main2()
//{
//	test01();
//	system("pause");
//	return 0;
//}
