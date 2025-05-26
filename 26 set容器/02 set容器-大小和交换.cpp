//#include<iostream>
//using namespace std;
//#include<set>
//
//void printSet(const set<int>&s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////大小
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(70);
//	s1.insert(20);
//	printSet(s1);
//
//	if (s1.empty())
//	{
//		cout << "空：" << endl;
//	}
//	else
//	{
//		cout << "不空" << endl;
//		cout << "大小为：" << s1.size() << endl;
//	}
//
//}
//
////交换
//void test02()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(70);
//	s1.insert(20);
//	printSet(s1);
//
//	set<int>s2;
//	s2.insert(100);
//	s2.insert(400);
//	s2.insert(300);
//	s2.insert(700);
//	s2.insert(200);
//	printSet(s2);
//
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//
//}
//int main2()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}