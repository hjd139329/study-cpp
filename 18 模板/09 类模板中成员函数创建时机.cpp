//#include<iostream>
//using namespace std;
//
////类模板中的成员函数，并不是一开始就创建的，而是在模板调用时再生成
//
//
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1的调用" << endl;
//	}
//};
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2的调用" << endl;
//	}
//};
//
//template<class T>
//class myClass
//{
//public:
//	T obj;
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//void test01()
//{
//	myClass<Person2>my;
//	//my.func1();//编译会出错，说明函数调用才会去创建成员函数
//	my.func2();
//}
//int main9()
//{
//	test01();
//	system("pause");
//	return 0;
//}