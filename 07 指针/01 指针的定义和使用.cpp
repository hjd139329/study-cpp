#include<iostream>
using namespace std;

int main1()
{
	//����ָ��
	int a = 10;
	int* p = &a;
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "p��ֵΪ��" << p << endl;


	//ָ��Ľ�����
	*p = 1000;
	cout << a << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}