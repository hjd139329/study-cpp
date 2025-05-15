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
	string names[] = { "张三", "李四", "王五" };//
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		//if (i == 0)//一定注意==不是=
		//{
		//	cout << "张三的总成绩为：" << sum << endl;
		//}
		//else if (i == 1)
		//{
		//	cout << "李四的总成绩为：" << sum << endl;
		//}
		//else
		//{
		//	cout << "王五的总成绩为：" << sum << endl;
		//}
		//还可以用一个字符数组
		cout << names[i] << "的成绩为：" << sum << endl;
	}

	system("pause");
	return 0;

}