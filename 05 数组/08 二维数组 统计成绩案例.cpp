#include <iostream>
using namespace std;
#include<string>


int main()
{

	int score[][3] =
	{
		{100, 99, 97},
		{99, 87, 86},
		{87, 96, 76}
	};
	string names[] = { "����", "����", "����" };//
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		//if (i == 0)//һ��ע��==����=
		//{
		//	cout << "�������ܳɼ�Ϊ��" << sum << endl;
		//}
		//else if (i == 1)
		//{
		//	cout << "���ĵ��ܳɼ�Ϊ��" << sum << endl;
		//}
		//else
		//{
		//	cout << "������ܳɼ�Ϊ��" << sum << endl;
		//}
		//��������һ���ַ�����
		cout << names[i] << "�ĳɼ�Ϊ��" << sum << endl;
	}

	system("pause");
	return 0;

}