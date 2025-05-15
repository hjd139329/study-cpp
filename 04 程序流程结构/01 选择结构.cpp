#include<iostream>
using namespace std;

int main1()
{
	//单行if
	//用户输入一个分数，如果>600分，考上一本大学
	
	/*int a = 0;
	cin >> a;
	cout << "请输入您的分数" << endl;*/

	
	//if(a>600)
	//{
	//	cout << "恭喜你，考上一本大学" << endl;
	//}
	//if (a <= 600)
	//{
	//	cout << "很遗憾，你未能考上一本大学" << endl;
	//}
	
	//多行格式if
	//int score = 0;
	//cout << "请输入您的分数：" << endl;
	//cin >> score;
	//if (score > 600)
	//{
	//	cout << "恭喜您，考上一本大学" << endl;
	//}
	//else
	//{
	//	cout << "很遗憾，您未能考上一本大学" << endl;
	//}

	//多条件if
	int score = 0;
	cout << "请输入您的分数" << endl;
	cin >> score;
	if (score > 600)
	{
		cout << "恭喜您，考上一本大学" << endl;
	}
	else if (score>500&&score<=600)
	{
		cout << "恭喜您，考上二本大学" << endl;
	}
	else if (score > 450 && score <= 500)
	{
		cout << "恭喜您，考上三本大学" << endl;
	}
	else 
	{
		cout << "您未考上本科" << endl;
	}
	

	system("pause");
	return 0;

}