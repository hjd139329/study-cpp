//#include<iostream>
//using namespace std;
//#include<set>
//
//
////set容器,插入数据时自动排序，且不允许存在重复数据
////multiset允许
//void printSet(const set<int>&s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void printMultiset(const multiset<int>& s)
//{
//	for (multiset<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
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
//	printSet(s1);
//
//	multiset<int>s2;
//	s2.insert(10);
//	s2.insert(130);
//	s2.insert(1320);
//	s2.insert(10232);
//	s2.insert(1023);
//	s2.insert(1023);
//	s2.insert(1023);
//
//	printMultiset(s2);
//
//}
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}
