#include<iostream>
using namespace std;

//��ӡ���ݵĺ���

void printData(const int& ref)//����const��ֹ�ں�������������޸Ĵ���ֵ
{
	//ref = 100;//Υ����������Ϊconst���εĲ������޸�
	cout << "ref:" <<ref<< endl;

}
int main()
{
	int a = 10;
	//int& ref = 10;//����ģ���Ϊ�������úϷ��Ŀռ�
	const int& ref = 10;//�Ϸ��ģ���Ϊ�൱�ڱ������������²���
	//int temp = 10; const int& ref = 10;
	//�൱�ڱ������Լ�������һ������temp=10����������ref�������ã��������ǿ�����ԭ��
	//ֻ��֪������ref

	printData(a);
	system("pause");
	return 0;
}