//#include<iostream>
//using namespace std;
//
//
////1.�����������Ƶ�����ͬ����������
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////ģ�����ȷ��T���������Ͳſ���ʹ��
//template<typename T>
//void func()
//{
//	cout << "func�ĵ���" << endl;
//}
//void test01()
//{
//	//�������ʹ����ʾָ������,��Ϊfunc������û��ָ���β�����
//	//�����κ����Ͷ�����
//	func<int>();//��ʾָ������
//}
//int main2()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b);//��ȷ
//	cout << a << b << endl;
//	//mySwap(a, c);//������Ϊa��c���Ͳ�ͬ
//	test01();
//	system("pause");
//	return 0;
//}