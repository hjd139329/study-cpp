//#include<iostream>
//using namespace std;
//
//
////1.类模板没有自动类型推导
////2.类模板的模板参数列表可以有默认参数
//
//
//template<class TypeName, class TypeAge = int>//默认TypeAge为int
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
//	//Person p("孙悟空", 999);//错误，没有自动推导
//	Person <string>p("孙悟空", 999);//正确，可以默认为int
//	p.shwoPerson();
//}
//int main8()
//{
//	test01();
//	system("pause");
//	return 0;
//}