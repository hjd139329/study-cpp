#include<iostream>
using namespace std;


int main1() 
{
	//数组三种定义形式
	// 如果初始化未完全，会用0填充
	//1. 数据类型 数据名[数组长度];
	int arr1[5] ;
	for (int i = 0; i <= 4; i++)
	{
		arr1[i] = i;
		cout << arr1[i] << endl;
	}

	//2.数据类型  数据名 [数组长度]={数据1，数据2.数据3......};
	int arr2[5] = { 0,1,2,3,4};
	for (int j = 0; j <= 4; j++)
	{
		cout << arr2[j] << endl;
	}
	//3.数据类型  数据名[]={数据1，数据2，数据3，...};
	int arr3[] = { 0,1,2,3,4 };
	for (int k = 0; k <= 4; k++)
	{
		cout << arr3[k] << endl;
	}
	cout << "arr3的长度为：" << sizeof(arr3)/sizeof(arr3[0]) << endl;

	system("pause");
	return 0;
}
