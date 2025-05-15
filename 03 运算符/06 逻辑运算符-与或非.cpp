#include<iostream>
using namespace std;
int main()
{
	// 与&&  或||  非！
	int a1 = 100;//在c++中只要不是0，就为真
	int b1 = 0;
	cout << (a1 && b1) << endl;//  与&&  都真为真，其余为假
	cout << (a1 || b1) << endl;//  或||  都假为假  其余为真
	cout << !!a1 << endl;//！！  非非 为原值
	cout << !b1 << endl;

	system("pause");
	return 0;

}