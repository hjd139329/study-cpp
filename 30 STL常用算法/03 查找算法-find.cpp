//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<string>
//
// 
////����Ԫ��
////������������
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);//�����Ƿ���5���Ԫ��
//	if (it == v.end())
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�" << *it << endl;
//	}
//}
//
////�Զ�����������
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
//		cout << "û�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���---������" << it->m_Name << "���䣺" << it->m_Age << endl;
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