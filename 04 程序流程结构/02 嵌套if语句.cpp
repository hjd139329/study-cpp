#include<iostream>
using namespace std;

int main2()
{

	int score = 0;
	cout << "请输入您的分数" << endl;
	cin >> score;
	if (score > 600)
	{
		cout << "恭喜您，考上一本大学" << endl;
		if(score>700)
		{
			cout << "您能上清北" << endl;
		}
		else if (score > 650)
		{
			cout << "您能上985" << endl;
		}
		else
		{
			cout << "您能上211大学" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜您，考上二本大学" << endl;
	}
	else if (score > 450)
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