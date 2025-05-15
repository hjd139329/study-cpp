//#include<iostream>
//using namespace std;
//
//
////抽象类特点：
////1、无法实例化对象
//class Base
//{
//public:
//	//纯虚函数
//	//类中只要有一个纯虚函数，该类就叫抽象类
//	virtual void func () = 0;
//};
//
//class Son :public Base
//{
//public:
//
//	//子类必须重写父类的虚函数，否则子类也为抽象类,
//	virtual void func()
//	{
//		cout << "func的调用" << endl;
//	}
//};
//void test01()
//{
//	//Base b;//抽象类无法实例化对象
//	//Son s;
//
//	//多态的调用
//	Base * base = new Son;
//	base->func();
//}
//int main3()
//{
//	test01();
//	system("pause");
//	return 0;
//}