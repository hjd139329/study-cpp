//#include<iostream>
//using namespace std;
//#include<map>
//
//
//void printMap(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << (*it).first << "  value:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 130));
//	m.insert(pair<int, int>(4, 20));
//	m.insert(pair<int, int>(5, 670));
//	printMap(m);
//
//	if (m.empty())
//	{
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ�գ�" << endl;
//		cout << "m�Ĵ�СΪ��" << m.size() << endl;
//	}
//
//
//
//}
//
//void test02()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 130));
//	m.insert(pair<int, int>(4, 20));
//	m.insert(pair<int, int>(5, 670));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(1, 4000));
//	m2.insert(pair<int, int>(2, 3000));
//	m2.insert(pair<int, int>(3, 200));
//	m2.insert(pair<int, int>(4, 1000));
//	cout << "����ǰ��" << endl;
//	printMap(m);
//	printMap(m2);
//
//	m.swap(m2);
//	printMap(m);
//	printMap(m2);
//
//
//
//
//}
//int main2()
//{
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}