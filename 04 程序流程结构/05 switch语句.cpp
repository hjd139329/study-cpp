#include<iostream>
using namespace std;

int main()
{

	//对电影进行打分
	//switch语句缺点：只能判断整型或者字符型，不能判断区间
	//优点：结构清晰
	int score = 0;
	cout << "请输入您打的分数" << endl;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	switch (score)
	{
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影很好看" << endl;
		break;
	default:
		cout << "您认为电影一般" << endl;
		break;
	}
	system("pause");
	return 0;

}