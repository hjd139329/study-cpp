//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<numeric>
//
////交集，原容器必须时有序序列
//void myPrint(int val)
//{
//	cout << val << "  ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
//	//取交集，极端情况，一个容器元素包含另一个容器元素
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	//返回迭代器，返回值是交集中最后一个元素位置
//	vector<int>::iterator it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), it, myPrint);
//	
//
//}
//int main19()
//{
//	test01();
//	system("pause");
//	return 0;
//}