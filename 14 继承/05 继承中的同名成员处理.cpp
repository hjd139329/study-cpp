//#include<iostream>
//using namespace std;
//
//
//class Base
//{
//public:
//
//	void func()
//	{
//		cout << "�����func����" << endl;
//	}
//	void func(int)
//	{
//		cout << "�����func������int��" << endl;
//	}
//	int m_A = 100;
//};
//
//class Son :public Base
//{
//public:
//	int m_A = 200;
//	void func()
//	{
//		cout << "�����func����" << endl;
//	}
//};
//
//void test01()
//{
//	Son s1;
//	cout << "Son��m_A:" << s1.m_A << endl;//���������е�ͬ����Ա��ֱ�ӷ���
//	cout << "Base��m_A:" << s1.Base::m_A << endl;//Ҫ���ʸ����е�ͬ����Ա����������
//	s1.func();//���������е�ͬ��������ֱ�ӷ���
//	s1.Base::func();//���ʸ����ͬ����������������
//
//
//	//�����ᱨ����Ϊ�������ڷ�������͸�����ͬ����Աʱ����Ѹ����ȫ��ͬ�����ص�
//	//s1.func(100);
//	
//	//�����Ҫ���ʸ����е�ͬ�����غ�������������
//	s1.Base::func(100);
//
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}