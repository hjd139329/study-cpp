#include<iostream>
using namespace std;

int main()
{

	//goto,标记存在，挑战到标记位置，不推荐使用
	cout << "1" << endl;
	cout << "2" << endl;

	goto Flag;
	cout << "3" << endl;
	cout << "4" << endl;

Flag:
	cout << "5" << endl;
	cout << "6" << endl;


	system("pause");
	return 0;
}