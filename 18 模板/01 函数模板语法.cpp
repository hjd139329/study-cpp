//#include<iostream>
//using namespace std;
//
////模板的作用提高复用性，将类型参数化
//template<typename T>//告诉编译器，下面要写模板了
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//int main1()
//{
//	int a = 10;
//	int b = 20;
//	//1.自动类型推导
//	mySwap(a, b);
//	cout << a << b << endl;
//	//2.显示指定类型
//	mySwap<int>(a, b);
//	cout << a << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	mySwap(c, d);
//	cout << c << d << endl;
//
//	system("pause");
//	return 0;
//}