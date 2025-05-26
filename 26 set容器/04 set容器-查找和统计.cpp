//#include<iostream>
//using namespace std;
//#include<set>
//
//
////对于set的查找，若找到，返回元素迭代器，若没找到，返回.end()
////对于set的统计，只会出现0或者1，因为set不允许重复元素
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(130);
//	s1.insert(1320);
//	s1.insert(10232);
//	s1.insert(1023);
//	s1.insert(1023);
//	s1.insert(1023);
//
//	set<int>::iterator it = s1.find(10232);
//	if(it!=s1.end())
//	{
//		cout << "找到了：" << *it << endl;
//	}
//	else
//	{
//		cout << "没找到" << endl;
//	}
//
//	int num = s1.count(1023);
//	cout << num << endl;
//}
//int main4()
//{
//	test01();
//	system("pause");
//	return 0;
//}