#include<iostream>
using namespace std;

void swap(int* p1, int* p2)
{
	int temp = * p1;
	*p1 = *p2;
	*p2 = temp;
}
int main6()
{

	//ֵ���ݣ����ı�ʵ��


	//��ַ���ݣ��ı�ʵ��

	int a = 10;
	int b = 20;
	swap(&a, &b);
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}