//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	int *m_Age;
//	Person(int age)
//	{
//		m_Age = new int (age);
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//
//		}
//	}
//
//	//赋值运算符重载
//	Person& operator=(Person &p)
//	{
//
//		//先判断是否有属性再堆区，如果有，先释放干净
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//
//	p3 = p2 = p1;//编译器自己提供的是浅拷贝
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}
//int main4()
//{
//	test01();
//	system("pause");
//	return 0;
//}