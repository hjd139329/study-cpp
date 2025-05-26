//#include<iostream>
//using namespace std;
//#include<set>
//
//
//
//void test01()
//{
//	set<int>s1;
//	//set不允许插入相同的值
//	//set在插入时，会返回一个pair类型，该类型有两个值
//	pair<set<int>::iterator, bool> ret = s1.insert(10);
//
//	if (ret.second)
//	{
//		cout << "插入成功" << endl;//成功
//	}
//	else
//	{
//		cout << "插入失败" << endl;
//	}
//	ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "插入成功" << endl;
//	}
//	else
//	{
//		cout << "插入失败" << endl;//失败
//	}
//	//multiset允许插入相同的值，在插入成功时，不会返回值
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}