//#include<iostream>
//using namespace std;
//#include<map>
//
//
////mapĬ�ϰ���keyֵ��С��������
//void printMap(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "��һ��key��" << (*it).first << "�ڶ���value��" << it->second << endl;
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
//	//��������
//	map<int, int>m1(m);
//	printMap(m1);
//
//
//	//��ֵ
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