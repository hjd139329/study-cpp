//#include<iostream>
//using namespace std;
//
////一般开发中，写了函数模板，就不写普通函数
////1.普通函数和函数模板都可以调用，优先调用普通函数
////2.可以通过空模板参数列表调用函数模板
////3.函数模板可以发生重载
////4.如果函数模板发生更好的匹配，优先函数模板
//
//void myPrint(int a, int b)
//{
//	cout << "普通函数的调用" << endl;
//}
//
//template <typename T>
//void myPrint(T a, T b)
//{
//	cout << "函数模板的调用" << endl;
//}
//
////函数模板的重载
//template <typename T>
//void myPrint(T a, T b ,T c)
//{
//	cout << "函数模板重载的调用" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	myPrint(a, b);//这样是调用普通函数
//	myPrint<>(a, b);//这样调用函数模板
//	myPrint(a, b, 100);//这样调用重载的函数模板
//
//	char c = 'c';
//	char d = 'd';
//
//	//如果函数模板发生更好的匹配，优先函数模板
//	myPrint(c, d);//调用函数模板，虽然普通函数也可以调用，但是需要经过隐式类型转化
//
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}
