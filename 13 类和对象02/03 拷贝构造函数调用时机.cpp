//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	int m_Age;
//
//public:
//	Person()
//	{
//		cout << "Person的默认构造调用" << endl;
//	}
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person的默认构造调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person的拷贝构造调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构构造调用" << endl;
//	}
//
//
//};
//
//
////1.拷贝函数的调用时机1：利用一个已有的对象来创建一个新的对象
////void test01()
////{
////	Person p1(10);
////	Person p2(p1);
////	cout << "p1的年龄为：" <<p1.m_Age <<endl;
////	cout << "p2的年龄为：" << p2.m_Age<<endl;
////
////}
//
////2.值传递的方式给函数参数传值
////void do_Work(Person p)
////{
////
////}
////void test02()
////{
////	Person p;
////	do_Work(p);//这步也是调用了拷贝构造函数
////}
//
//
////3.值方式返回局部对象
//Person do_Work()
//{
//	Person p1;
//	return p1;
//}
//void test03()
//{
//	Person p = do_Work();//这里也会调用拷贝构造函数
//}
//int main3()
//{
//	/*test01();*/
//	/*test02();*/
//	test03();
//	system("pause");
//	return 0;
//}