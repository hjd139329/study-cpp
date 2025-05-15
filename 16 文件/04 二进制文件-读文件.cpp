#include<iostream>
#include<fstream>
using namespace std;

//这个类的构造要和写文件中的那个类一样
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
		cout << "读取失败" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;

}