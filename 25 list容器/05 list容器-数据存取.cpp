//#include<iostream>
//using namespace std;
//#include<list>
//
////list不支持[]和at()访问
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	cout << "第一个元素为：" << L1.front() << endl;
//	cout << "最后一个元素为：" << L1.back() << endl;
//	
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = L1.begin();
//	++it;
//	//it = it + 1;//不可以，这代表可以跳跃访问
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}