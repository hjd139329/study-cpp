//#include<iostream>
//using namespace std;
//#include<list>
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
//	L1.push_back(40);
//	printList(L1);
//
//
//	//��������
//	list<int>L2(L1);
//	printList(L2);
//
//	//���乹��
//	list<int>L3(L1.begin(), L1.end());
//	printList(L3);
//
//	//n��elem����
//	list<int>L4(10, 100);
//	printList(L4);
//
//
//
//
//}
//int main1()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}