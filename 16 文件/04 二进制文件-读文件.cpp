#include<iostream>
#include<fstream>
using namespace std;

//�����Ĺ���Ҫ��д�ļ��е��Ǹ���һ��
class Person
{
public:
	char m_Name[64];
	int m_Age;

};
void test01()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "��ȡʧ��" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;

}