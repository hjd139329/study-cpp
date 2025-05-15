#include<iostream>
using namespace std;

//全局变量、静态变量、常量都放在全局区

//main函数之外的统称为全局变量
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;


int main1()
{
	//普通变量
	int a = 10;
	int b = 10;
	//静态变量 在普通变量前加static
	static int s_a =10;
	static int s_b = 10;

	//常量
	// 1.字符串常量
	"字符串常量";
	//2.const修饰的常量
	//const修饰的全局常量
	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;
	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;
	cout << "打印静态变量s_a的地址:"<<(int)&s_a << endl;
	cout << "打印静态变量s_b的地址:" << (int)&s_b << endl;
	cout << "字符串常量的地址为：" << (int)&"字符串常量" << endl;
	cout << "const修饰的全局常量c_g_a地址为：" << (int)&c_g_a << endl;
	cout << "const修饰的全局常量c_g_b地址为：" << (int)&c_g_b << endl;

	//const修饰的局部变量（局部常量）
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "const修饰的局部常量c_l_a的地址为：" << (int)&c_l_a << endl;
	cout << "const修饰的局部常量c_l_b的地址为："<<(int)&c_l_b << endl;
	// 局部修饰的都不在全局区
	system("pause");
	return 0;
}