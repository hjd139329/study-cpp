//#include<iostream>
//using namespace std;
//
////�ֻ���
//class Phone
//{
//public:
//	Phone(string pname)
//	{
//		m_PName = pname;
//		cout << "Phone�Ĺ��캯������" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone������" << endl;
//	}
//	string m_PName;
//};
//
////����
//class Person
//{
//public:
//	string m_Name;
//	Phone m_Phone;
//
//	//Phone m_Phone = pname  //��ʽת���� 
//	Person(string name, string pname) :m_Name(name), m_Phone(pname)
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person������" << endl;
//	}
//};
//
//
////ʹ���������Ϊ�����Ա���ȴ���������ٹ��챾������ʱ�෴��
////����ʱ�����������࣬���������������
//void test01()
//{
//	Person p("����", "ƻ��max");
//	cout << p.m_Name << "���ţ� " << p.m_Phone.m_PName << endl;
//}
//int main7()
//{
//	test01();
//	system("pause");
//	return 0;
//}