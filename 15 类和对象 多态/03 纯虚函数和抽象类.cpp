//#include<iostream>
//using namespace std;
//
//
////�������ص㣺
////1���޷�ʵ��������
//class Base
//{
//public:
//	//���麯��
//	//����ֻҪ��һ�����麯��������ͽг�����
//	virtual void func () = 0;
//};
//
//class Son :public Base
//{
//public:
//
//	//���������д������麯������������ҲΪ������,
//	virtual void func()
//	{
//		cout << "func�ĵ���" << endl;
//	}
//};
//void test01()
//{
//	//Base b;//�������޷�ʵ��������
//	//Son s;
//
//	//��̬�ĵ���
//	Base * base = new Son;
//	base->func();
//}
//int main3()
//{
//	test01();
//	system("pause");
//	return 0;
//}