#include<iostream>
using namespace std;

int main1()
{
	//����if
	//�û�����һ�����������>600�֣�����һ����ѧ
	
	/*int a = 0;
	cin >> a;
	cout << "���������ķ���" << endl;*/

	
	//if(a>600)
	//{
	//	cout << "��ϲ�㣬����һ����ѧ" << endl;
	//}
	//if (a <= 600)
	//{
	//	cout << "���ź�����δ�ܿ���һ����ѧ" << endl;
	//}
	
	//���и�ʽif
	//int score = 0;
	//cout << "���������ķ�����" << endl;
	//cin >> score;
	//if (score > 600)
	//{
	//	cout << "��ϲ��������һ����ѧ" << endl;
	//}
	//else
	//{
	//	cout << "���ź�����δ�ܿ���һ����ѧ" << endl;
	//}

	//������if
	int score = 0;
	cout << "���������ķ���" << endl;
	cin >> score;
	if (score > 600)
	{
		cout << "��ϲ��������һ����ѧ" << endl;
	}
	else if (score>500&&score<=600)
	{
		cout << "��ϲ�������϶�����ѧ" << endl;
	}
	else if (score > 450 && score <= 500)
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