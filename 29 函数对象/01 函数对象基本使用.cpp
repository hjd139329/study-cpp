//#include<iostream>
//using namespace std;
//
//
////���������ڵ���ʱ����������ͨ����ʹ�ã��в�����Ҳ�з���ֵ
//
//class MyAdd
//{
//public:
//	int operator()(int v1,int v2)
//	{
//		return v1 + v2;
//	}
//};
//void test01()
//{
//	MyAdd myadd;
//	cout << myadd(10, 10) << endl;
//}
//
//
////��������������Լ���״̬
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		count++;
//	}
//	int count;//�ڲ��Լ���״̬
//};
//
//
//void test02()
//{
//	MyPrint myprint;
//	myprint("hello world");
//	myprint("hello world");
//	myprint("hello world");
//	cout << myprint.count << endl;
//}
//
//
//
////�����һ������
//void doPrint(MyPrint&m,string test)
//{
//	m(test);
//}
//void test03()
//{
//	MyPrint myprint;
//	doPrint(myprint, "hell C++");
//
//}
//int main1()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}