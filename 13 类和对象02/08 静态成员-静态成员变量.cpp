//#include<iostream>
//using namespace std;
//
////��̬��Ա����
//
////1.���ж�����һ������
////2.�ڱ���׶η����ڴ�
////3.���������������ʼ��
//class Person
//{
//public:
//	static int m_A;//����staticΪ��̬��Ա���������и����Ԫ�ص�m_A��Ϊͬһ��ֵ
//
//private:
//	static int m_B;//��̬��Ա����Ҳ���з���Ȩ�޵�
//};
//int Person::m_A = 10;
//void test01()
//{
//	Person p1;
//	//p.m_A = 10;
//	Person p2;
//	p2.m_A = 100;
//	cout << p1.m_A << endl;
//}
//void test02()
//{
//	//��̬��Ա�����������κ�һ�������ϣ����ж�����
//	//1.ͨ���������
//	Person p;
//	cout << p.m_A << endl;
//	//2.ͨ����������
//	cout << Person::m_A << endl;
//}
//int main8()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}