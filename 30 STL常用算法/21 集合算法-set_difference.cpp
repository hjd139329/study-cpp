#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>

//差集，原容器必须是有序序列
void myPrint(int val)
{
	cout << val << "  ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int>vTarget;
	//取差集，极端情况，两个容器没有并集，新容器大小为两容器中较大的那个
	vTarget.resize(max(v1.size(),v2.size()));


	cout << "v1和v2的差集：" << endl;//0 1 2 3 4
	//返回迭代器，返回值是差集中最后一个元素位置
	vector<int>::iterator it1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), it1, myPrint);

	cout << endl;
	cout << "v2和v1的差集" << endl;//10 11 12 13 14
	vector<int>::iterator it2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), it2, myPrint);

}
int main()
{
	test01();
	system("pause");
	return 0;
}