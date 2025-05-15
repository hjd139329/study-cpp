//#include<iostream>
//using namespace std;
//
////手机类
//class Phone
//{
//public:
//	Phone(string pname)
//	{
//		m_PName = pname;
//		cout << "Phone的构造函数调用" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone的析构" << endl;
//	}
//	string m_PName;
//};
//
////人类
//class Person
//{
//public:
//	string m_Name;
//	Phone m_Phone;
//
//	//Phone m_Phone = pname  //隐式转换法 
//	Person(string name, string pname) :m_Name(name), m_Phone(pname)
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构" << endl;
//	}
//};
//
//
////使用类对象作为本类成员，先创建类对象，再构造本身（析构时相反）
////析构时，先析构本类，再析构其他类对象
//void test01()
//{
//	Person p("张三", "苹果max");
//	cout << p.m_Name << "拿着： " << p.m_Phone.m_PName << endl;
//}
//int main7()
//{
//	test01();
//	system("pause");
//	return 0;
//}