#include<iostream>
using namespace std;

//����Ҳ������Ϊ�������ص�������������const������
void func(int &a)
{
	cout << "int &a" << endl;

}
void func(const int &a)//
{
	cout << "const int &a" << endl;
}

//������������Ĭ�ϲ���
//���ǵ�ֻдֻ����һ������ʱ�������һ�����غ����Ĵ��ڵڶ�������
//�ҵڶ�������������Ĭ�ϲ�������ô�����Ե���
//func(int a)
//func(int a, int = 10)
//func(10)
//����������������Ե���
void func2(int a)
{
	cout << "func2-int" << endl;
}

void func2(int a, int b)
{
	cout << "func2-a-b" << endl;
}
int main()
{
	int a = 20;
	func(a);//������ò���const�Ĳ���
	func(10);//������const����
	func2(10);

	func2(10, 20);
	system("pause");
	return 0;
}