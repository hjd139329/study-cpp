#include<iostream>
using namespace std;


int main1() 
{
	//�������ֶ�����ʽ
	// �����ʼ��δ��ȫ������0���
	//1. �������� ������[���鳤��];
	int arr1[5] ;
	for (int i = 0; i <= 4; i++)
	{
		arr1[i] = i;
		cout << arr1[i] << endl;
	}

	//2.��������  ������ [���鳤��]={����1������2.����3......};
	int arr2[5] = { 0,1,2,3,4};
	for (int j = 0; j <= 4; j++)
	{
		cout << arr2[j] << endl;
	}
	//3.��������  ������[]={����1������2������3��...};
	int arr3[] = { 0,1,2,3,4 };
	for (int k = 0; k <= 4; k++)
	{
		cout << arr3[k] << endl;
	}
	cout << "arr3�ĳ���Ϊ��" << sizeof(arr3)/sizeof(arr3[0]) << endl;

	system("pause");
	return 0;
}
