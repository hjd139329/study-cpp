//#include<iostream>
//using namespace std;
//#include<string>
//
//
////���ع�ϵ�����
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
//	//�����ж�==��ϵ�����
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			//cout << "p1��p2����ȵģ�" << endl;
//			return true;
//		}
//		else
//		{
//			//cout << "p1��p2�ǲ���ȵģ�" << endl;
//			return false;
//		}
//	}
//
//	//���أ�=��ϵ�����
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
//		cout << "p1��p2����ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//
//	}
//	if (p1 != p2)
//	{
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2����ȵģ�" << endl;
//	}
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}