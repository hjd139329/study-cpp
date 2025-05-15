#include <iostream>
using namespace std;
#include<ctime>

int main3()
{

	//随机生成1-100的数字
	srand((unsigned int)time(NULL));
	//
	int i = rand() % 100 + 1;//生成一个1-100的数字，赋值给i， 在没有随机数种子的时候，伪随机
	int guess = 0;
	cout << "请给出您猜测的数字" << endl;
	cin >> guess;
	int a = 1;
	while (guess != i&&a<=4)
	{
		
		if (guess > i)
		{
			cout << "猜测过大" << endl;
		}
		if (guess < i)
		{
			cout << "猜测过小" << endl;
		}
		cin >> guess;
		a++;
	}
	if (guess == i) 
	{
		cout << "恭喜您猜测成功，数字为：" << i << endl;
	}
	else
	{
		cout << "次数用完，失败" << endl;

	}


	system("pause");
	return 0;
}
