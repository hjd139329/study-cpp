#include<iostream>
using namespace std;
int main9()
{
	//break���ô�
	//1. switch  ѡ�񸱱��Ѷ�
	//cout << "��ѡ�������Ѷ�" << endl;

	//int selest = 0;
	//cin >> selest;
	//switch (selest)
	//{
	//case 1:
	//	cout << "��ѡ�������ͨ�Ѷ�" << endl;
	//	break;
	//case 2:
	//	cout << "��ѡ�����һ���Ѷ�" << endl;
	//	break;
	//case 3:
	//	cout << "��ѡ����������Ѷ�" << endl;
	//	break;
	//default:
	//	break;
	//}


	//2.����������ǰѭ��
	//for (int i = 0; i <= 9; i++)
	//{
	//	if (i==5)
	//	{
	//		break;
	//	}
	//	cout << i << endl;
	//}


	//3.������Ƕ��ѭ���У��Ƴ��ڲ�ѭ��
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << " * " ;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}