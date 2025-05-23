//#include<iostream>
//using namespace std;
//#include<deque>
//
//
//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
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
//	if (d1.empty())
//	{
//		cout << "容器为空" << endl;
//	}
//	else
//	{
//		cout << "容器不为空" << endl;
//		cout << "容器大小为：" << d1.size() << endl;
//		//cout<<d1.capacity() deque容器 没有大小的概念
//	}
//	d1.resize(15);//容器变大，填充默认值
//	printDeque(d1);
//	d1.resize(20, 1);//指定填充的值
//	printDeque(d1);
//
//	d1.resize(5);//容器变小，删除多余值
//	printDeque(d1);
//}
//int main3()
//{
//	test01();
//	system("pause");
//	return 0;
//}