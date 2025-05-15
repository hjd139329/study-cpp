#include<iostream>
using namespace std;

int main2()
{

	int a = 0;
	int* p = &a;
	//x86(32位)系统下，指针都占4个字节
	//在64位操作系统下，都占8个字节
	cout << "int* 所占内存：" << sizeof(p) << endl;
	cout << "double* 所占内存：" << sizeof(double *) << endl;
	cout << "float* 所占内存：" << sizeof(float *) << endl;
	cout << "char* 所占内存：" << sizeof(char *) << endl;

	system("pause");
	return 0;
}