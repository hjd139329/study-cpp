//#include<iostream>
//using namespace std;
//#include<deque>
//
//
//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it!= d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	//Î²²å
//	d1.push_back(10);
//	d1.push_back(20);
//	//Í·²å
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//	//Î²É¾
//	d1.pop_back();
//	printDeque(d1);
//	//Í·É¾
//	d1.pop_front();
//	printDeque(d1);
//
//
//}
//void test02()
//{
//	deque<int>d1;
//	//Î²²å
//	d1.push_back(10);
//	d1.push_back(20);
//	//Í·²å
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//
//	deque<int>d2;
//	d2.push_front(1);
//	d2.insert(d2.begin(), d1.begin(), d1.end());
//	printDeque(d2);
//
//	//d2.erase(d2.begin(), d2.end());
//	//d2.clear();
//	d2.erase(d2.begin());
//	printDeque(d2);
//
//	d2.insert(d2.begin(), 2,10);
//	printDeque(d2);
//
//
//
//}
//int main4()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}