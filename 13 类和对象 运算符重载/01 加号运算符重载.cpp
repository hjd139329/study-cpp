//#include <iostream>
//using namespace std;
//
////��������أ������е�������������¶��壬�����¹��ܣ�����Ӧ��ͬ����������
//
////1.��Ա��������+
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//	string m_Name;
//	Person operator+ (Person *p)//���ó�Ա��������+
//	{
//		Person temp;
//		temp.m_A = p->m_A + this->m_A;
//		temp.m_B = p->m_B + this->m_B;
//		temp.m_Name = p->m_Name + this->m_Name;
//		return temp;
//	}
//};
//
////ȫ�ֺ�������+
//Person operator+(Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	temp.m_Name = p1.m_Name + p2.m_Name;
//	return temp;
//}
//
////���������Ҳ���Է����������أ�ֻҪ����Ĳ�����ͬ��˳��ͬ
//Person operator+(Person &p1, int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//void test01()
//{
//	Person p1;
//	Person p2;
//	p1.m_A = 1;
//	p1.m_B = 2;
//	p1.m_Name = "����";
//	p2.m_A = 3;
//	p2.m_B = 4;
//	p2.m_Name = "����";
//
//
//	////��Ա��������+
//	//Person p3 = p1.operator+(&p2);//���ó�Ա��������+�������ظ�p3
//	//cout << "p3��m_AΪ��" << p3.m_A << endl;//4
//	//cout << "p3��m_BΪ��" << p3.m_B << endl;//6
//	//cout << "p3��m_NameΪ��" << p3.m_Name << endl;
//	////���Ϊ����������˵��p2����ǰ��
//
//
//	//ȫ�ֺ���������+
//	Person p3 = operator+(p1, p2);
//	cout << "p3��m_AΪ��" << p3.m_A << endl;//4
//	cout << "p3��m_BΪ��" << p3.m_B << endl;//6
//	cout << "p3��m_NameΪ��" << p3.m_Name << endl;//���Ϊ�������ģ�˵��p2���ں���
//
//	//���������Ҳ���Է�����������
//	Person p4;
//	p4 = p1 + 100;
//	cout << p4.m_A << p4.m_B  << endl;
//}
//
//
//
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}