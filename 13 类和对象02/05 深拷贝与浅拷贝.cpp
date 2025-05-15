//#include<iostream>
//using namespace std;
//
////编译器自己创建的拷贝函数时浅拷贝，在释放new创建的空间时会重复释放
////所以我们要自己创建拷贝函数，使用深拷贝，避免重复释放同一片内存空间
//class Person
//{
//public:
//	int m_Age;
//	int* m_Height;//创建指向身高的指针
//	Person()
//	{
//		cout << "默认构造函数的调用" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);//new返回的是指针，所以需要用指针接收
//		cout << "有参构造函数的调用" << endl;
//	}
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height//编译器默认实现这行代码
//		//自己写，实现深拷贝
//		m_Height = new int(*p.m_Height);//深拷贝，使用new重新开辟空间
//
//		cout << "拷贝构造函数的调用" << endl;
//	}
//	~Person()
//	{
//		//堆区开辟的数据，一般在析构函数中释放
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "析构函数调用" << endl;
//	}
//};
//
//void test01()
//{
//	Person p1(18, 170);
//	cout << "p1的年龄为：" << p1.m_Age << "身高为：" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}