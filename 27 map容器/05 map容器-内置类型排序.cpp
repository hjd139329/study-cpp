//#include<iostream>
//using namespace std;
//#include<map>
//
//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2)const
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	map<int, int, MyCompare>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 140));
//	m.insert(make_pair(5, 15));
//	m.insert(make_pair(6, 13));
//	m.insert(make_pair(8, 1035));
//	m.insert(make_pair(3, 167));
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << it->first << "  value:" << it->second << endl;
//	}
//	cout << endl;
//
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}