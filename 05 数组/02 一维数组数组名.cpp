#include<iostream>
using namespace std;

int main2()
{
	//数据名是常量，不可以修改
	//1.数组名可以用来得到数组中元素个数

	int arr[] = { 1,2,3,4,5,6 };
	cout << "arr所占空间为：" << sizeof(arr) << endl;
	cout << "arr第一个元素所占空间为：" << sizeof(arr[0]) << endl;
	cout << "arr中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2.访问数组的地址（即首元素地址）
	cout << (int)arr << endl;//arr前面加[],表示强制转换类型,默认地址是16进制
	cout << (int)&arr[0] << endl;//&表示取某个元素的地址
	system("pause");
	return 0;
}