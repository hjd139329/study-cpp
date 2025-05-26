#include<iostream>
using namespace std;
#include<list>
#include<string>


//排序，优先按照年龄进行升序，年龄相同按照身高进行降序
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;

};

void printList(const list<Person>&L)
{
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "  "
			<< "年龄：" << it->m_Age << "  "
			<< "身高：" << it->m_Height << endl;
	}

}
bool myCompare1(Person p1, Person p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}
bool myCompare2(Person p1, Person p2)
{
	return p1.m_Height > p2.m_Height;
}
void test01()
{
	Person p1("李一", 18, 180);
	Person p2("李二", 18, 199);
	Person p3("李三", 45, 158);
	Person p4("李四", 18, 189);
	Person p5("李五", 23, 166);
	Person p6("李六", 23, 168);
	list<Person>L1;
	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);
	printList(L1);

	cout << "-----------------" << endl;
	L1.sort(myCompare1);
	printList(L1);
	//L1.sort(myCompare2);
	//printList(L1);


}
int main()
{
	test01();
	system("pause");
	return 0;
}