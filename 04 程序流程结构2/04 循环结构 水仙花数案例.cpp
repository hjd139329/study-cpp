#include<iostream>
using namespace std;


int main4()
{
	//ˮ�ɻ�����ָһ����λ��������ÿ��λ�ϵ����ֵ�������֮�͵���������
	//����1^3+5^3+3^3=153
	//������е�ˮ�ɻ���

	int i = 100;
	int a = 0;//��λ
	int b = 0;//ʮλ
	int c = 0;//��λ
	
	do
	{
		a = i % 10;//��λ
		b = i / 10 % 10;//ʮλ
		c = i / 100;//��λ
		if (a*a*a+b*b*b+c*c*c==i)
		{
			cout << i << endl;
		}
		i++;
	} while (i < 1000);

	system("pause");
	return 0;
}