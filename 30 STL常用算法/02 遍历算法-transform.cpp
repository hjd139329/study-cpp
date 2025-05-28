//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//
//class mytransform
//{
//public:
//	int operator()(int val)
//	{
//		return val + 100;
//	}
//};
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>vTarget;
//	vTarget.resize(v.size());
//
//	transform(v.begin(), v.end(), vTarget.begin(), mytransform());
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//}
//int main2()
//{
//	test01();
//	system("pause");
//	return 0;
//}