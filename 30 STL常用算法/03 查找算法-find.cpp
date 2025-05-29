//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<string>
//
// 
////查找元素
////内置数据类型
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);//查找是否有5这个元素
//	if (it == v.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << *it << endl;
//	}
//}
//
////自定义数据类型
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator == (const Person &p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
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
//	Person p1("sfa",14);
//	Person p2("dfsda",16);
//	Person p3("sfa",18);
//	Person p4("sfasd",19);
//	Person p5("ssdf",123);
//	vp.push_back(p1);
//	vp.push_back(p2);
//	vp.push_back(p3);
//	vp.push_back(p4);
//	vp.push_back(p5);
//	
//	Person pp("sfa", 28);
//	vector<Person>::iterator it = find(vp.begin(), vp.end(), pp);
//	if (it == vp.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到了---姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;
//	}
//
//}
//int main3()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}