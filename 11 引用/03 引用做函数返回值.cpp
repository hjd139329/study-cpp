//#include <iostream>
//using namespace std;
//
//
////1.不能返回局部变量引用
////不要作局部变量返回值，因为局部变量在函数结束后会被释放 
//// 2.若函数返回的为引用，则可以作为表达式左值
//
//int& test01()
//{
//	static int a = 10;//static 静态变量
//	return a;//可以返回静态变量
//}
//
//int main3()
//{
//	int& ref = test01();
//	cout << "ref:" <<ref<< endl;
//
//	test01() = 1000;//如果函数的返回值是引用，则可以作为表达式的左值
//	cout << "ref:" << ref<<endl;
//	system("pause");
//	return 0;
//}