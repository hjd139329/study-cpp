//#include<iostream>
//using namespace std;
//#include<list>
//
//void printList(const list<int>&l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L1.begin(), L1.end());
//	printList(L3);
//
//
//
//}
//void test02()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2(4, 100);
//
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	printList(L1);
//	printList(L2);
//
//
//
//}
//int main2()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
