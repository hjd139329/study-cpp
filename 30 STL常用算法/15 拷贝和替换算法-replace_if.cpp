//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//
//
// 
////���������滻������ĳЩԪ��
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << "  ";
//	}
//};
//class Greater10
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 10;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(10);
//	v.push_back(10);
//	v.push_back(10);
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//
//	replace_if(v.begin(), v.end(), Greater10(), 1000);
//	cout << "�滻��" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//}
//int main15()
//{
//	test01();
//	system("pause");
//	return 0;
//}
