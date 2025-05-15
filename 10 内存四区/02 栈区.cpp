//#include<iostream>
//using namespace std;
//
//
//int * fun(int b)//形参也会放在栈区
//{
//	int a = 10;
//	return &a;//不要返回局部变量的地址
//}
//int main2()
//{
//	int a = 0;
//	int *p = fun(a);//在函数执行完后，局部变量会被编译器释放
//	cout << *p << endl;//第一次可以打印，是因为编译器作了一次保留
//	cout << *p << endl;//不要返回局部变量的地址
//	system("pause");
//	return 0;
//}