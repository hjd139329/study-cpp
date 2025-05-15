#include<iostream>
using namespace std;

int main3()
{
	//找出最重的小猪
	int arr[] = { 350, 250,390,100,300,466};
	int max = 0;
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "最重的为：" << max << endl;
	system("pause");
	return 0;
}