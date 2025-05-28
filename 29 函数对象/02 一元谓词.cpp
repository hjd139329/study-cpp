//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//
//一元谓词，传入一个参数并且返回bool类型的仿函数

//struct GreaterFive
//{
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "没找到";
//	}
//	else
//	{
//		cout << "找到了" << *it << endl;
//	}
//
//}
//int main2()
//{
//	test01();
//	system("pause");
//	return 0;
//}