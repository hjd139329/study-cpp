//#include<iostream>
//using namespace std;
//#include<vector>
//
////
//
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前：" << endl;
//	printVector(v1);
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//	v1.swap(v2);
//	cout << "交换后：" << endl;
//	printVector(v1);
//	printVector(v2);
//
//
//}
//
////实际用处，收缩内存
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);//修改大小为3
//	cout << "v的容量为：" << v.capacity() << endl;//此时容量仍为138000多，浪费空间
//	cout << "v的大小为：" << v.size() << endl;
//
//	//巧用swap（）收缩空间
//	vector<int>(v).swap(v);//相当于创建一个匿名函数,用来收缩空间
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//}
//int main6()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}