#include<iostream>
using namespace std;


int main7()
{
	int arr[2][3] =
	{
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << "arrռ�õ��ڴ棺" << sizeof(arr) << endl;
	cout << "arrһ��ռ�õ��ڴ棺" << sizeof(arr[0]) << endl;
	cout << "arrһ��Ԫ��ռ�õ��ڴ棺" << sizeof(arr[0][0]) << endl;
	cout << "arr��Ԫ�ظ�����" << sizeof(arr)/sizeof(arr[0][0]) << endl;
	cout << "arr������" << sizeof(arr) / sizeof(arr[0]) << endl;//�ܿռ�/��ռ�ռ�
	cout << "arr������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//һ��ռ�ռ�/ÿ��Ԫ��ռ�ռ�

	//�鿴�����ַ,��ά����ĵ�ַ����Ԫ�ص�ַ,Ҳ�ǵ�һ�е�ַ
	cout << (int)arr << endl;
	cout << (int) & arr[0][0] << endl;

	system("pause");
	return 0;

}