#include<iostream>
using namespace std;

//ȫ�ֱ�������̬����������������ȫ����

//main����֮���ͳ��Ϊȫ�ֱ���
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;


int main1()
{
	//��ͨ����
	int a = 10;
	int b = 10;
	//��̬���� ����ͨ����ǰ��static
	static int s_a =10;
	static int s_b = 10;

	//����
	// 1.�ַ�������
	"�ַ�������";
	//2.const���εĳ���
	//const���ε�ȫ�ֳ���
	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (int)&g_b << endl;
	cout << "��ӡ��̬����s_a�ĵ�ַ:"<<(int)&s_a << endl;
	cout << "��ӡ��̬����s_b�ĵ�ַ:" << (int)&s_b << endl;
	cout << "�ַ��������ĵ�ַΪ��" << (int)&"�ַ�������" << endl;
	cout << "const���ε�ȫ�ֳ���c_g_a��ַΪ��" << (int)&c_g_a << endl;
	cout << "const���ε�ȫ�ֳ���c_g_b��ַΪ��" << (int)&c_g_b << endl;

	//const���εľֲ��������ֲ�������
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "const���εľֲ�����c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;
	cout << "const���εľֲ�����c_l_b�ĵ�ַΪ��"<<(int)&c_l_b << endl;
	// �ֲ����εĶ�����ȫ����
	system("pause");
	return 0;
}