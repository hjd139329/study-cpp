#include<iostream>
using namespace std;

int main4()
{

	int arr[] = {1,2,3,4,5,6,7,8,9};
	int length = sizeof(arr) / sizeof(arr[0]);
	int tem = 0;
	cout << "����֮ǰ�ģ�" << endl;
	for (int k = 0; k < length; k++)
	{
		cout << arr[k]<<",";
	}
	cout << endl;
	for (int i = 0; i <length/2; i++)//ע�������ѭ��������Ҫ<length/2,
	{
		tem = arr[i];
		arr[i] = arr[length - 1-i];
		arr[length - 1 - i] = tem;
	}
	cout << "������ɣ�" << endl;
	for (int j = 0; j < length; j++)
	{
		cout << arr[j]<<",";
	}
	cout << endl;


	//�����Դ���startָ�������Ԫ�أ�endָ�����ұ�Ԫ�أ�����ѭ������start<endʱ����
	/*int start = 0;
	int end = length - 1;
	while (start < end)
	{
	    ѭ����
	}*/
	system("pause");
	return 0;
}