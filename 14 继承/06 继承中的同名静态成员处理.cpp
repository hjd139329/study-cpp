//#include<iostream>
//using namespace std;
//
//
////��̬��Ա����ֻ��һ�ݣ�����ͬ���Ա����
////��̬��Ա����ֻ��һ������ʵ������ֻ�ܷ��ʾ�̬��Ա����
////��̬��Ա�����ͺ����������ַ��ʷ�ʽ��һ��������������
//class Base
//{
//public:
//	static void func()
//	{
//		cout << "�����func" << endl;
//	}
//	static void func(int)
//	{
//		cout << "�����func(int)" << endl;
//	}
//	static int m_A ;//��̬��Ա���ԣ����������������ʼ��
//};
//int Base::m_A = 100;//�����ʼ��
//
//class Son:public Base
//{
//public:
//	static void func()
//	{
//		cout << "�����func" << endl;
//	}
//	static int m_A;
//};
//int Son::m_A = 200;
//
//
////��̬��Ա����
//void test01()
//{
//	Son s1;
//	
//	//1.ͨ��������ʾ�̬��Ա����	
//	//����ͬ����̬��Ա������ֱ�ӷ���
//	cout << "Son��AΪ��" << s1.m_A << endl;
//	//����ͬ����̬��Ա��������������
//	cout << "Base��AΪ��" << s1.Base::m_A << endl;
//	//2.ͨ���������ʾ�̬��Ա����
//	cout << "Son����������AΪ��" << Son::m_A << endl;
//	//��һ����������ͨ���������ʣ��ڶ�����ʾ���ʸ����m_A
//	cout << "Base����������AΪ��" << Son::Base::m_A << endl;
//}
//
////��̬��Ա����
//void test02()
//{
//	//ͨ��������ʾ�̬��Ա����
//	Son s2;
//	s2.func();
//	s2.Base::func();
//
//	//ͨ���������ʾ�̬��Ա����
//	Son::func();
//	Son::Base::func();
//
//	//Ҫ����ʸ�����ͬ�������غ�������Ҫ��������
//	//��Ϊһ���������ĺ�������������Ѹ�������ص�
//	s2.Base::func(100);
//}
//
//
//int main6()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}