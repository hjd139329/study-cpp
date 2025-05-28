#include<iostream>
using namespace std;
#include<functional>
#include<algorithm>
#include<vector>

//与或非
//logical_and  与
//logical_o 或
//logical _not  非
void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  " << endl;
	}
	cout << "-------------" << endl;
	vector <bool>v2;

	//先开辟才能搬运
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << "  " << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}