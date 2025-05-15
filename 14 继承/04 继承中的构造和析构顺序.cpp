//#include<iostream>
//using namespace std;
//
//
//
////先创建父类，再创建子类，先析构子类，再析构父类
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数！" << endl;
//	}
//	~Base()
//	{
//		cout << "Base的析构函数！" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数！" << endl;
//	}
//	~Son()
//	{
//		cout << "Son的析构函数！" << endl;
//	}
//};
//
//
//void test01()
//{
//	Son s1;
//}
//int main4()
//{
//	test01();
//	system("pause");
//	return 0;
//}