//#include<iostream>
//using namespace std;
//#include<map>
//
//
////map默认按照key值从小到达排序
//void printMap(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "第一个key：" << (*it).first << "第二个value：" << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 20));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(2, 30));
//	printMap(m);
//
//	//拷贝构造
//	map<int, int>m1(m);
//	printMap(m1);
//
//
//	//赋值
//	map<int, int>m2;
//	m2 = m;
//	printMap(m1);
//
//}
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}