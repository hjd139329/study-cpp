#include<iostream>
using namespace std;

int main4()
{

	//���ʽ1 �����ʽ2 �����ʽ3
	//������ʽ1Ϊ�棬���ر��ʽ2��ֵ�����򷵻ر��ʽ3��ֵ

	int a = 10;
	int b = 20;
	int c = 0;
	c = (a >= b ? a : b);
	cout << "a��b������ֵΪ��" << c << endl;

	//ע�⣬c++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a >= b ? a : b) = 100;//���ʽ���Ϊb	
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;

}
