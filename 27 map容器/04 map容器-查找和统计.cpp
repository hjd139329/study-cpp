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
//		cout << "�ҵ���" << endl;
//		cout << "key:" << pos->first << "  value:" << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "û�ҵ�" << endl;
//	}
//
//	//ͳ��
//	int num = m.count(2);//count()���ҵ���keyֵ����ֻ�᷵��0��1
//	//��multimap�У�count�������ܷ���>1��ֵ����Ϊmultimap���Բ�����ͬ��key
//	cout << num << endl;
//}
//
//int main4()
//{
//	test01();
//	system("pause");
//	return 0;
//}