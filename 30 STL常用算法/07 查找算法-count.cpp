//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//
//
//
////内置数据类型
//void test01()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(1);
//	int num = count(v.begin(), v.end(), 1);
//	cout << num << endl;
//
//
//}
////自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(const Person&p)
//	{
//
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//void test02()
//{
//	vector<Person>vp;
//	Person p1("aaa", 13);
//	Person p2("bbb", 16);
//	Person p3("ccc", 13);
//	Person p4("ddd", 13);
//	Person p5("eee", 13);
//	vp.push_back(p1);
//	vp.push_back(p2);
//	vp.push_back(p3);
//	vp.push_back(p4);
//	vp.push_back(p5);
//
//	Person p("qq", 13);
//	int num = count(vp.begin(), vp.end(), p);
//	cout << num << endl;
//
//}
//int main7()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
