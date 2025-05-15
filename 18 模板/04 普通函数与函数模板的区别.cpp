//#include<iostream>
//using namespace std;
//
//
////1.普通函数调用时会发生隐式类型转换
////2.函数模板在调用时，用自动类型推导 不会发生隐式类型转换
////3.函数模板在调用时，用显示指定类型 会发生隐式类型转换
//
//
////普通函数
//int myAdd1(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template<typename T>
//T myAdd2(T a, T b)//要用显示指定类型进行隐式转换，不要传递地址
//{
//	return a + b;
//}
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//ASCII编码  a=97 c=99
//	cout << myAdd1(a, b) << endl;
//	cout << myAdd1(a, c) << endl;//发生隐式类型转换
//}
//void test02()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//cout << myAdd2(a, c) << endl;//自动类型推导，不发生隐式类型转化，不能运行
//}
//
//void test03()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd2<int>(a, c) << endl;
//}
//int main4()
//{
//	//test01();
//	test03();
//	system("pause");
//	return 0;
//}