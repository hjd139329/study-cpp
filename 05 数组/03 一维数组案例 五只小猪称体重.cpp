#include<iostream>
using namespace std;

int main3()
{
	//�ҳ����ص�С��
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
	cout << "���ص�Ϊ��" << max << endl;
	system("pause");
	return 0;
}