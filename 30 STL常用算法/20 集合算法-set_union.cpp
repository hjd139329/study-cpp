//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<numeric>
//
////并集，原容器必须是有序序列
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
//	//取并集，极端情况，两个容器没有并集，新容器大小为两容器大小之和
//	vTarget.resize(v1.size()+v2.size());
//
//	//返回迭代器，返回值是交集中最后一个元素位置
//	vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), it, myPrint);
//
//
//}
//int main20()
//{
//	test01();
//	system("pause");
//	return 0;
//}