#include<iostream>
using namespace std;

int main3()
{

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "请输入三只小猪的体重" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "a小猪为：" << a<< endl;
	cout << "b小猪为：" << b<< endl;
	cout << "c小猪为：" << c<< endl;

	if (a == b && a == c)
	{
		cout << "三只小猪一样重" << endl;
	}
	else
	{
		if (a >= b)
		{
			if (a == b)
			{
				cout << "a和b一样重" << endl;
			}
			else
			{
				cout << "a比b重" << endl;
			}
			if (a >= c)
			{
				if (a == c)
				{
					cout << "a和c一样最重，为：" << a << endl;
				}
				else
				{
					cout << "a最重，为：" << a << endl;
				}
			}
			else
			{
				cout << "c最重，为：" << c << endl;
			}
		}
		else
		{
			cout << "b比a重" << endl;
			if (b >= c)
			{
				if (b == c)
				{
					cout << "b和c一样最重，为：" << b << endl;
				}
				else
				{
					if (a == c)
					{
						cout << "a和c一样重" << endl;
					}
					cout << "b最重，为：" << b << endl;
				}
			}
			else
			{
				cout << "c最重，为：" << c << endl;
			}
		}
	}
	



	system("pause");
	return 0;

}