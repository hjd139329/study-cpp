#include<iostream>
using namespace std;


//���غ����������������
//���صģ���д�������

class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test01()
{
	MyPrint myFunc;//���صģ����ǳ�����������Ҳ��Ϊ�º���
	myFunc("hello,word");
}

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myadd;
	int ret = myadd(10, 20);
	cout << "ret:" << ret << endl;

	//�����������
	cout << MyAdd()(100, 20) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
