//#include<iostream>
//using namespace std;
//
//
////函数对象在调用时，可以像普通函数使用，有参数，也有返回值
//
//class MyAdd
//{
//public:
//	int operator()(int v1,int v2)
//	{
//		return v1 + v2;
//	}
//};
//void test01()
//{
//	MyAdd myadd;
//	cout << myadd(10, 10) << endl;
//}
//
//
////函数对象可以有自己的状态
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		count++;
//	}
//	int count;//内部自己的状态
//};
//
//
//void test02()
//{
//	MyPrint myprint;
//	myprint("hello world");
//	myprint("hello world");
//	myprint("hello world");
//	cout << myprint.count << endl;
//}
//
//
//
////像参数一样传递
//void doPrint(MyPrint&m,string test)
//{
//	m(test);
//}
//void test03()
//{
//	MyPrint myprint;
//	doPrint(myprint, "hell C++");
//
//}
//int main1()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}