//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<functional>
//
//
////merge算法，可以将两个有序的容器结合成一个有序的容器
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << "  ";
//	}
//};
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//	vector<int>vTarget;
//	vTarget.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//
//
//}
//int main11()
//{
//	test01();
//	system("pause");
//	return 0;
//}