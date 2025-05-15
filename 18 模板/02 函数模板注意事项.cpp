//#include<iostream>
//using namespace std;
//
//
////1.编译器必须推导出相同的数据类型
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////模板必须确定T的数据类型才可以使用
//template<typename T>
//void func()
//{
//	cout << "func的调用" << endl;
//}
//void test01()
//{
//	//这里必须使用显示指定类型,因为func函数并没有指定形参类型
//	//所以任何类型都可以
//	func<int>();//显示指定类型
//}
//int main2()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b);//正确
//	cout << a << b << endl;
//	//mySwap(a, c);//错误，因为a和c类型不同
//	test01();
//	system("pause");
//	return 0;
//}