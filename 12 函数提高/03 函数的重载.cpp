//#include<iostream>
//using namespace std;
//
////函数重载（重名）---提高函数名的复用性
//
////函数重载的条件
////1.在同一个作用域中
////2.函数名相同
////3.函数传递的参数类型不同或者参数数量、顺序不同
//
////函数的返回值不能作为重载条件，仅返回值不同不可以重载
//void func()
//{
//	cout << "func" << endl;
//}
//void func(int a)
//{
//	cout << "func(int)" << endl;
//}
//void func(double a)
//{
//	cout << "func(double)" << endl;
//}
//void func(int a, double b)
//{
//	cout << "int,double" << endl;
//}
//void func(double a, int b)
//{
//	cout << "double,int" << endl;
//}
//int main3()
//{
//	func();
//	func(10);
//	func(3.14);
//	func(10, 3.14);
//	func(3.14, 10);
//	system("pause");
//	return 0;
//}