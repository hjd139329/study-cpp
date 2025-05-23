#include<iostream>
using namespace std;
#include<vector>


void test01()
{
	vector<int>v;
	int num = 0;
	int* p = NULL;
	//使用reserve预留空间，减少容器寻找空间次数
	v.reserve(100000);//预留100000
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num等于" << num << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}
