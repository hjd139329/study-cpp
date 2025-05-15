//#include<iostream>
//using namespace std;
////引用的本质是指针常量，所以也可以解释为什么引用初始化后不能修改
////因为指针常量的指向不能修改，但是指针指向的值可修改
//
////编译器看到int &ref， 自动转化为 int * const ref = &a
//void func(int& ref)
//{
//	ref = 100;
//}
//int main4()
//{
//	int a = 10;
//	int& ref = a;
//	ref = 20;//编译器发现是引用，自动转化为*ref = 20
//	cout << ref << endl;
//	system("pause");
//	return 0;
//}