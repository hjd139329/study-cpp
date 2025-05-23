//#include<iostream>
//using namespace std;
//#include<vector>
//
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
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
//	printVector(v1);
//	if (v1.empty())
//	{
//		cout << "容器为空" << endl;
//	}
//	else
//	{
//		cout << "容器不为空" << endl;
//		cout << "容器的容量为：" << v1.capacity() << endl;
//		cout << "容器的大小为：" << v1.size() << endl;
//	}
//	v1.resize(15);//大小变大，会添加默认值0
//	printVector(v1);
//	v1.resize(5);//大小变小，会删除多余值
//	printVector(v1);
//	v1.resize(15, 100);//可以通过参数2指定添加的默认值
//	printVector(v1);
//}
//int main3()
//{
//	test01();
//	system("pause");
//	return 0;
//}