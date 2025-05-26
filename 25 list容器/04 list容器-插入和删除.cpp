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
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//	printList(L1);
//	L1.pop_back();
//	L1.pop_front();
//	printList(L1);
//	list<int>::iterator it = L1.begin();
//	L1.insert(++it, 10000);
//	printList(L1);
//
//	L1.erase(it);
//	printList(L1);
//	L1.push_back(10000);
//	L1.push_back(10000);
//	L1.push_back(10000);
//	printList(L1);
//
//	L1.remove(10000);
//	printList(L1);
//	L1.erase(L1.begin());
//	printList(L1);
//
//
//
//
//}
//int main4()
//{
//	test01();
//	system("pause");
//	return 0;
//}