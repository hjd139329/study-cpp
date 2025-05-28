//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//#include<algorithm>
//
//
////内置数据类型
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		if (val > 5)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到了" << *it << endl;
//	}
//}
//
//
////自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Nmae = name;
//		this->m_Age = age;
//	}
//
//	string m_Nmae;
//	int m_Age;
//};
//bool GreaterAge(Person &p)
//{
//	if (p.m_Age > 20)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void test02()
//{
//	vector<Person>vp;
//	Person p1("aaa", 19);
//	Person p2("bbb", 23);
//	Person p3("ccc", 16);
//	Person p4("ddd", 14);
//	vp.push_back(p1);
//	vp.push_back(p2);
//	vp.push_back(p3);
//	vp.push_back(p4);
//
//	vp.push_back(p1);
//	vector<Person>::iterator it = find_if(vp.begin(), vp.end(), GreaterAge);
//	if (it == vp.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到了----姓名：" << it->m_Nmae << "年龄：" << it->m_Age << endl;
//	}
//}
//int main4()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
