//#include <iostream>
//using namespace std;
//
//
////1.���ܷ��ؾֲ���������
////��Ҫ���ֲ���������ֵ����Ϊ�ֲ������ں���������ᱻ�ͷ� 
//// 2.���������ص�Ϊ���ã��������Ϊ���ʽ��ֵ
//
//int& test01()
//{
//	static int a = 10;//static ��̬����
//	return a;//���Է��ؾ�̬����
//}
//
//int main3()
//{
//	int& ref = test01();
//	cout << "ref:" <<ref<< endl;
//
//	test01() = 1000;//��������ķ���ֵ�����ã��������Ϊ���ʽ����ֵ
//	cout << "ref:" << ref<<endl;
//	system("pause");
//	return 0;
//}