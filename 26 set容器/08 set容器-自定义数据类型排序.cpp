#include<iostream>
using namespace std;
#include<set>
#include<string>



class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class ComparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2)const//得加const修饰
	{
		return p1.m_Age > p2.m_Age;
	}
};
void test01()
{
	set<Person,ComparePerson>s;

	Person p1("asf", 10);
	Person p2("ada", 29);
	Person p3("aasd", 21);
	Person p4("sdf", 26);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "  " << "年龄：" << it->m_Age << endl;
	}


}
int main()
{
	test01();
	system("pause");
	return 0;
}