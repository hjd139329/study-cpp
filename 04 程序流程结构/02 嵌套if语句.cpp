#include<iostream>
using namespace std;

int main2()
{

	int score = 0;
	cout << "���������ķ���" << endl;
	cin >> score;
	if (score > 600)
	{
		cout << "��ϲ��������һ����ѧ" << endl;
		if(score>700)
		{
			cout << "�������山" << endl;
		}
		else if (score > 650)
		{
			cout << "������985" << endl;
		}
		else
		{
			cout << "������211��ѧ" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "��ϲ�������϶�����ѧ" << endl;
	}
	else if (score > 450)
	{
		cout << "��ϲ��������������ѧ" << endl;
	}
	else
	{
		cout << "��δ���ϱ���" << endl;
	}
	system("pause");
	return 0;

}