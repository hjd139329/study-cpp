//#include<iostream>
//using namespace std;
//#include<map>
//
//
//void printMap(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << it->first << "value:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	printMap(m);
//	map<int, int>::iterator pos = m.find(1);
//	if (pos != m.end())
//	{
//		cout << "找到了" << endl;
//		cout << "key:" << pos->first << "  value:" << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "没找到" << endl;
//	}
//
//	//统计
//	int num = m.count(2);//count()查找的是key值，且只会返回0或1
//	//在multimap中，count（）可能返回>1的值，因为multimap可以插入相同的key
//	cout << num << endl;
//}
//
//int main4()
//{
//	test01();
//	system("pause");
//	return 0;
//}