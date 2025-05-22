//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>//标准算法库
//
//
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//通过迭代器访问容器中的数据
//	vector<int>::iterator itBegin = v.begin();//起始迭代器，指向第一个元素
//	vector<int>::iterator itEnd = v.end();//结束迭代器，指向最后元素的下一个位置
//	//第一种遍历
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//
//	//第二种遍历
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//
//	//第三种遍历
//	//使用STL提供的标准算法，for_each() 需要包含algorithum
//	for_each(v.begin(), v.end(), myPrint);
//}
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
