//#include<iostream>
//using namespace std;
//
//
////1.��ͨ��������ʱ�ᷢ����ʽ����ת��
////2.����ģ���ڵ���ʱ�����Զ������Ƶ� ���ᷢ����ʽ����ת��
////3.����ģ���ڵ���ʱ������ʾָ������ �ᷢ����ʽ����ת��
//
//
////��ͨ����
//int myAdd1(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
//template<typename T>
//T myAdd2(T a, T b)//Ҫ����ʾָ�����ͽ�����ʽת������Ҫ���ݵ�ַ
//{
//	return a + b;
//}
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//ASCII����  a=97 c=99
//	cout << myAdd1(a, b) << endl;
//	cout << myAdd1(a, c) << endl;//������ʽ����ת��
//}
//void test02()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//cout << myAdd2(a, c) << endl;//�Զ������Ƶ�����������ʽ����ת������������
//}
//
//void test03()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd2<int>(a, c) << endl;
//}
//int main4()
//{
//	//test01();
//	test03();
//	system("pause");
//	return 0;
//}