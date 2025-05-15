#include<iostream>
using namespace std;

int main5()
{
	//冒泡排序
	int arr[] = { 23,24,676,45,89,46,76,88,23,999 };
	int temp = 0;
	int length = sizeof(arr) / sizeof(arr[0]);
	int pointer = 0;

	cout << "冒泡排序前：" << endl;
	for (int pre = 0; pre < length; pre++)
	{
		cout << arr[pre]<<",";
	}
	cout << endl;


	for (int i = 0; i < length-1; i++)//遍历的轮数=元素个数-1
	{
		pointer = 0;//在每轮中每次比较都指向较大的值
		for (int j = 0; j < length - 1 - i; j++)//每一轮比较的次数=元素个数-遍历的第几轮数-1
		{
			//注释是自己写的，可以优化，pointer不需要了
			/*if (arr[pointer] >= arr[pointer + 1])
			{
				temp = arr[pointer];
				arr[pointer] = arr[pointer + 1];
				arr[pointer + 1] = temp;
				pointer++;
			}
			else
			{
				pointer++;
			}*/

			//优化后
			if (arr[j] >= arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		
	}
	
	cout << "冒泡排序后：" << endl;
	for (int aft = 0; aft < length; aft++)
	{
		cout << arr[aft]<<",";
	}
	cout << endl;

	system("pause");
	return 0;
}