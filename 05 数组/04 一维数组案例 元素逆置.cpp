#include<iostream>
using namespace std;

int main4()
{

	int arr[] = {1,2,3,4,5,6,7,8,9};
	int length = sizeof(arr) / sizeof(arr[0]);
	int tem = 0;
	cout << "逆置之前的：" << endl;
	for (int k = 0; k < length; k++)
	{
		cout << arr[k]<<",";
	}
	cout << endl;
	for (int i = 0; i <length/2; i++)//注意这里的循环条件，要<length/2,
	{
		tem = arr[i];
		arr[i] = arr[length - 1-i];
		arr[length - 1 - i] = tem;
	}
	cout << "逆置完成：" << endl;
	for (int j = 0; j < length; j++)
	{
		cout << arr[j]<<",";
	}
	cout << endl;


	//还可以创建start指向最左边元素，end指向最右边元素，建立循环，当start<end时互换
	/*int start = 0;
	int end = length - 1;
	while (start < end)
	{
	    循环体
	}*/
	system("pause");
	return 0;
}