//#include<iostream>
//using namespace std;
//
//
////1.��ģ��û���Զ������Ƶ�
////2.��ģ���ģ������б������Ĭ�ϲ���
//
//
//template<class TypeName, class TypeAge = int>//Ĭ��TypeAgeΪint
//class Person
//{
//public:
//	Person(TypeName name, TypeAge age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//
//	}
//	TypeAge m_Age;
//	TypeName m_Name;
//	void shwoPerson()
//	{
//		cout << "name:" << this->m_Name << "age:" << this->m_Age << endl;
//	}
//};
//
//void test01()
//{
//	//Person p("�����", 999);//����û���Զ��Ƶ�
//	Person <string>p("�����", 999);//��ȷ������Ĭ��Ϊint
//	p.shwoPerson();
//}
//int main8()
//{
//	test01();
//	system("pause");
//	return 0;
//}