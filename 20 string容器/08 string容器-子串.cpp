#include<iostream>
using namespace std;
#include<string>

//str.substr(i,j)//�ӵ�i��λ�ã���ȡj��
void test01()
{
	string str = "hello";
	cout << str << endl;
	string substr = str.substr(0, 2);//�ӵ�0��λ�ã���ȡ2��
	cout << substr << endl;
}


//ʹ�ò�������ȡ�����û���

void test02()
{
	string email = "lisi@qq.com";
	int pos = email.find("@");//����@����λ��
	cout << pos << endl;
	string userName = email.substr(0, pos);
	cout << userName << endl;
	
}
int main()
{
	//test01();
	test02();
	system("pause");;
	return 0;
}
