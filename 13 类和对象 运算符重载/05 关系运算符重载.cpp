//#include<iostream>
//using namespace std;
//#include<string>
//
//
////重载关系运算符
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Age = age;
//		m_Name = name;
//	}
//	int m_Age;
//	string m_Name;
//
//	//重载判断==关系运算符
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			//cout << "p1和p2是相等的！" << endl;
//			return true;
//		}
//		else
//		{
//			//cout << "p1和p2是不相等的！" << endl;
//			return false;
//		}
//	}
//
//	//重载！=关系运算符
//	bool operator!= (Person p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1和p2是相等的！" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是不相等的！" << endl;
//
//	}
//	if (p1 != p2)
//	{
//		cout << "p1和p2是不相等的！" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是相等的！" << endl;
//	}
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}