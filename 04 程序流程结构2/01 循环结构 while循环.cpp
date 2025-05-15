#include <iostream>
using namespace std;


int main1()
{

	// while循环
	//在屏幕中打印0--9十个数字
	int a = 0;
	//运用while循环时，要避免死循环
	while (a <= 9)
	{
		cout << "当前数字为：" << a << endl;
		a++;
	}

	system("pause");
	return 0;
}