//#include<iostream>
//using namespace std;
//#include<deque>
//
//
//void printDeque(const deque<int>d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());//利用区间构造
//	printDeque(d2);
//
//	deque<int>d3(10, 100);//10个100
//	printDeque(d3);
//
//	deque<int>d4(d3);//拷贝构造
//	printDeque(d4);
//
//}
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}