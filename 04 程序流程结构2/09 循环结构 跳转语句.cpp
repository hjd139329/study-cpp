#include<iostream>
using namespace std;
int main9()
{
	//break的用处
	//1. switch  选择副本难度
	//cout << "请选择您的难度" << endl;

	//int selest = 0;
	//cin >> selest;
	//switch (selest)
	//{
	//case 1:
	//	cout << "您选择的是普通难度" << endl;
	//	break;
	//case 2:
	//	cout << "您选择的是一般难度" << endl;
	//	break;
	//case 3:
	//	cout << "您选择的是困难难度" << endl;
	//	break;
	//default:
	//	break;
	//}


	//2.用在跳出当前循环
	//for (int i = 0; i <= 9; i++)
	//{
	//	if (i==5)
	//	{
	//		break;
	//	}
	//	cout << i << endl;
	//}


	//3.出现再嵌套循环中，推出内层循环
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