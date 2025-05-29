//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<algorithm>
//
//
////仿函数，重载（）
//
////自定义数据类型
//class MyCompare
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 2;
//	}
//};
//void test01()
//{
//
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	int num = count_if(v.begin(), v.end(), MyCompare());
//	cout << num << endl;
//}
//
////自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(Person&p)
//	{
//		return this->m_Age > p.m_Age;
//	}
//	string m_Name;
//	int m_Age;
//};
//bool mycompare(Person&p)
//{
//	return p.m_Age > 20;
//}
//void test02()
//{
//	vector<Person>vp;
//
//	Person p1("aaa", 10);
//	Person p2("aaa", 20);
//	Person p3("aaa", 30);
//	Person p4("aaa", 40);
//	Person p5("aaa", 20);
//	Person p6("aaa", 60);
//	vp.push_back(p1);
//	vp.push_back(p2);
//	vp.push_back(p3);
//	vp.push_back(p4);
//	vp.push_back(p5);
//	vp.push_back(p6);
//
//	int num = count_if(vp.begin(), vp.end(), mycompare);
//	cout << num << endl;
//
//}
//int main1()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
