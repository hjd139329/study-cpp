#include<iostream>
using namespace std;


int main7()
{
	int arr[2][3] =
	{
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << "arr占用的内存：" << sizeof(arr) << endl;
	cout << "arr一行占用的内存：" << sizeof(arr[0]) << endl;
	cout << "arr一个元素占用的内存：" << sizeof(arr[0][0]) << endl;
	cout << "arr中元素个数：" << sizeof(arr)/sizeof(arr[0][0]) << endl;
	cout << "arr行数：" << sizeof(arr) / sizeof(arr[0]) << endl;//总空间/行占空间
	cout << "arr列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//一行占空间/每个元素占空间

	//查看数组地址,二维数组的地址即首元素地址,也是第一行地址
	cout << (int)arr << endl;
	cout << (int) & arr[0][0] << endl;

	system("pause");
	return 0;

}