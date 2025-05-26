//#include<iostream>
//#include<list>
//using namespace std;
//
//
//void printList(const list<int>&l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//bool myCompare(int v1, int v2)
//{
//	return v1 > v2;
//}
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(1);
//	L1.push_back(1022);
//	L1.push_back(16);
//	L1.push_back(23);
//	printList(L1);
//	L1.reverse();
//	printList(L1);
//
//
//	//排序：所有不支持随机访问的迭代器，不能使用标准算法库实现，他们内部有排序算法
//	L1.sort();//默认升序
//	printList(L1);
//
//	L1.sort(myCompare);//这样可以变为降序
//	printList(L1);
//
//}
//int main6()
//{
//	test01();
//	system("pause");
//	return 0;
//}
