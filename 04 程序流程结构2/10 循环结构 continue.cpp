#include<iostream>
using namespace std;

int main10() 
{
	//continue�ڱ���ѭ��������ʣ�µ���䣬ִ����һ��ѭ��
	for (int i = 0; i <= 100; i++)
	{
		if (i%2 == 1)
		{
			continue;//����ɸѡ����
		}
		cout << i << endl;
	}
	system("psuae");
	return 0;
}