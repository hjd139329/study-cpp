#include<iostream>
using namespace std;

int main6()
{


	//1.数据类型 数据名[][];
	int arr1[2][3];
	int num = 0;
	//输入数据
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr1[i][j] = num;
			num++;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			cout << arr1[i][j] << endl;
		}
	}

	//2.数据类型 数组名[行][列]={{数据1， 数据2}， {数据3， 数据4}};
	int arr2[2][3] = 
	{ 
		{0, 1, 2}, 
		{3, 4, 5}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}


	//3.数据类型 数组名[行数][列数]={数据1， 数据2， 数据3， 数据4};

	int arr3[2][3] = { 1, 2, 3, 4, 5, 6 };//给出行列数，系统自己区分行列数据
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}

	//4.数据类型 数组名[][列数]={数据1， 数据2， 数据3， 数据4，}；行数可以不写，列数必须有
	int arr4[][3] = { 1, 2, 3, 4, 5, 6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}