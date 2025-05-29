//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//
////遍历容器元素
//void print01(int val)
//{
//	cout << val << endl;
//}
//
//class print02
//{
//public:
//	void operator ()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), print01);//普通函数可以
//
//	for_each(v.begin(), v.end(), print02());//仿函数也可以，但是需要加()
//}
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}
