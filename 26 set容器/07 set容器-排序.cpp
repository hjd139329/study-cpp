//#include<iostream>
//using namespace std;
//#include<set>
//
//
//
//
////仿函数本质上是类型
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) const//这里加const
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	//默认从小到大
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(70);
//	s1.insert(20);
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//
//	set<int, MyCompare>s2;
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(30);
//	s2.insert(70);
//	s2.insert(20);
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
//int main7()
//{
//	test01();
//	system("pause");
//	return 0;
//}