#include<iostream>
#include<string>
using namespace std;



//cin >>         >>���������
int main()
{
	//1.int���ε�����
	int a = 0;//��ʼΪ0
	cout << "�������a��ֵ��" << "\n";
	cin >> a;
	cout << "��ֵ��Ϊ��" << a << "\n";

	//2.�����͵�����
	float b = 0.00f;
	cout << "��������͸�ֵ��" << b << "\n";
	cin >> b;
	cout << "��ֵ��Ϊ��" << b << "\n";

	//3.�ַ��͵�����
	char c = 'a';
	cout << "����ַ��͸�ֵ��" << "\n";
	cin >> c;
	cout << "��ֵ��Ϊ��" << c << "\n";


	//4.�ַ����͵�����   ����չʾ�����﷨ϰ��
	
	//c++��
	string d = "hello";
	cout << "����ַ�����ֵ��" << "\n";
	cin >> d;
	cout << "��ֵ��Ϊ��" << d << "\n";

	//c������
	char d1[] = "world";
	cout << "����ַ�����ֵ��" << "\n";
	cin >> d1;
	cout << "��ֵ��Ϊ��" << d1 << "\n";


	//5.bool���͵�����
	bool e = 1;
	cout << "���bool�͸�ֵ��" << "\n";
	cin >> e;
	cout << "��ֵ��Ϊ��" << e << "\n";

	system("pause");
	return 0;
}