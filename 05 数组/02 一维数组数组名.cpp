#include<iostream>
using namespace std;

int main2()
{
	//�������ǳ������������޸�
	//1.���������������õ�������Ԫ�ظ���

	int arr[] = { 1,2,3,4,5,6 };
	cout << "arr��ռ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "arr��һ��Ԫ����ռ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "arr��Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2.��������ĵ�ַ������Ԫ�ص�ַ��
	cout << (int)arr << endl;//arrǰ���[],��ʾǿ��ת������,Ĭ�ϵ�ַ��16����
	cout << (int)&arr[0] << endl;//&��ʾȡĳ��Ԫ�صĵ�ַ
	system("pause");
	return 0;
}