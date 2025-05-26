#include<iostream>
using namespace std;
#include<map>



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
class MyCompare
{
public:
	bool operator()(const Person &p1,const Person &p2)const
	{
		return p1.m_Age>p2.m_Age;
	}
};

void test01()
{
	map<Person, int, MyCompare>m;
	Person p1("ada", 18);
	Person p2("gd", 19);
	Person p3("werw", 23);
	Person p4("dfhdh", 45);
	Person p5("sfsd", 15);

	m.insert(make_pair(p1, 1));
	m.insert(make_pair(p2, 2));
	m.insert(make_pair(p3, 3));
	m.insert(make_pair(p4, 4));
	m.insert(make_pair(p5, 5));

	for (map<Person, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first.m_Name << " " << it->first.m_Age << "value:" << it->second << endl;
	}
	cout << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}