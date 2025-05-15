#include<iostream>
#include<string>
using namespace std;



//cin >>         >>叫右运算符
int main()
{
	//1.int整形的输入
	int a = 0;//初始为0
	cout << "请给整形a赋值：" << "\n";
	cin >> a;
	cout << "赋值完为：" << a << "\n";

	//2.浮点型的输入
	float b = 0.00f;
	cout << "请给浮点型赋值：" << b << "\n";
	cin >> b;
	cout << "赋值完为：" << b << "\n";

	//3.字符型的输入
	char c = 'a';
	cout << "请给字符型赋值：" << "\n";
	cin >> c;
	cout << "赋值完为：" << c << "\n";


	//4.字符串型的输入   下面展示两种语法习惯
	
	//c++中
	string d = "hello";
	cout << "请给字符串赋值：" << "\n";
	cin >> d;
	cout << "赋值完为：" << d << "\n";

	//c语言中
	char d1[] = "world";
	cout << "请给字符串赋值：" << "\n";
	cin >> d1;
	cout << "赋值完为：" << d1 << "\n";


	//5.bool类型的输入
	bool e = 1;
	cout << "请给bool型赋值：" << "\n";
	cin >> e;
	cout << "赋值完为：" << e << "\n";

	system("pause");
	return 0;
}