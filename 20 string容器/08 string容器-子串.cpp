#include<iostream>
using namespace std;
#include<string>

//str.substr(i,j)//从第i个位置，截取j个
void test01()
{
	string str = "hello";
	cout << str << endl;
	string substr = str.substr(0, 2);//从第0个位置，截取2个
	cout << substr << endl;
}


//使用操作，提取邮箱用户名

void test02()
{
	string email = "lisi@qq.com";
	int pos = email.find("@");//查找@所在位置
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
