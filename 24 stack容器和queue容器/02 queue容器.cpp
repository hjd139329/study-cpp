#include<iostream>
using namespace std;
#include<queue>
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
void test02()
{
	queue<Person>q;

	Person p1("ÌÆ1", 10);
	Person p2("ÌÆ2", 20);
	Person p3("ÌÆ3", 30);
	Person p4("ÌÆ4", 40);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << q.size() << endl;

	while (!q.empty())
	{
		cout << "Í·Îª£º" << q.front().m_Name << q.front().m_Age << endl;
		cout << "Î²Îª£º" << q.back().m_Name << q.back().m_Age << endl;
		q.pop();

	}
	cout << q.size() << endl;


}
int main()
{
	test02();
	system("pause");
	return 0;
}