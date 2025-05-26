//#include<iostream>
//using namespace std;
//#include<map>
//
//
//void printMap(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << it->first << "  value:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//
//	//第一种
//	m.insert(pair<int, int>(1, 10));
//
//	//第二种
//	m.insert(make_pair(2, 20));
//
//	//第三种
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//第四种
//	m[4] = 40;
//	//不推荐使用第四种
//	printMap(m);
//
//	//中括号[]用来寻找对应key的value值
//	cout << m[1] << endl;
//
//	m.erase(1);//删除时，按照查找的key删除
//	printMap(m);
//	m.erase(m.begin(), m.end());//按照区间删除
//	printMap(m);
//	m.clear();//清空
//
//	
//
//
//
//}
//int main3()
//{
//	test01();
//	system("pause");
//	return 0;
//}
