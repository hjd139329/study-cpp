#include <iostream>
using namespace std;
#include<ctime>

int main3()
{

	//�������1-100������
	srand((unsigned int)time(NULL));
	//
	int i = rand() % 100 + 1;//����һ��1-100�����֣���ֵ��i�� ��û����������ӵ�ʱ��α���
	int guess = 0;
	cout << "��������²������" << endl;
	cin >> guess;
	int a = 1;
	while (guess != i&&a<=4)
	{
		
		if (guess > i)
		{
			cout << "�²����" << endl;
		}
		if (guess < i)
		{
			cout << "�²��С" << endl;
		}
		cin >> guess;
		a++;
	}
	if (guess == i) 
	{
		cout << "��ϲ���²�ɹ�������Ϊ��" << i << endl;
	}
	else
	{
		cout << "�������꣬ʧ��" << endl;

	}


	system("pause");
	return 0;
}
