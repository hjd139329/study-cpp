//#include<iostream>
//#include<fstream>
//using namespace std;
//
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
//	//1������ͷ�ļ�
//
//	//2������������
//	ofstream ofs;
//	//3���򿪷�ʽ
//	ofs.open("person.txt", ios::out | ios::binary);
//	//4��д����
//	Person p = { "����", 18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	//5���ر��ļ�
//	ofs.close();
//}
//int main3()
//{
//	test01();
//	system("pause");
//	return 0;
//}