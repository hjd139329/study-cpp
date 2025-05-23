//#include<iostream>
//using namespace std;
//#include<vector>
//
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
//
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//
//	//插入
//	v1.insert(v1.begin(), 100);//在起始位置插入100
//	printVector(v1);
//	v1.insert(v1.begin(), 2, 90);//在起始位置插入2个90
//	printVector(v1);
//
//	//删除
//	v1.erase(v1.begin());//起始位置删除1个
//	printVector(v1);
//	//v1.erase(v1.begin(), v1.end());//起始到结束全部删除
//	v1.clear();//清空
//	printVector(v1);
//}
//int main4()
//{
//	test01();
//	system("pause");
//	return 0;
//}