#include<iostream>
using namespace std;


void BubbleSort(int* arr, int len)//Ã°ÅÝÅÅÐò
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void PrintArray(int* arr, int len)//´òÓ¡º¯Êý
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	PrintArray(arr, len);
	system("pause");
	return 0;
}