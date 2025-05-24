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

	Person p1("��1", 10);
	Person p2("��2", 20);
	Person p3("��3", 30);
	Person p4("��4", 40);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << q.size() << endl;

	while (!q.empty())
	{
		cout << "ͷΪ��" << q.front().m_Name << q.front().m_Age << endl;
		cout << "βΪ��" << q.back().m_Name << q.back().m_Age << endl;
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