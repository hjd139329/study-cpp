#include<iostream>
using namespace std;

int main2()
{

	int a = 0;
	int* p = &a;
	//x86(32λ)ϵͳ�£�ָ�붼ռ4���ֽ�
	//��64λ����ϵͳ�£���ռ8���ֽ�
	cout << "int* ��ռ�ڴ棺" << sizeof(p) << endl;
	cout << "double* ��ռ�ڴ棺" << sizeof(double *) << endl;
	cout << "float* ��ռ�ڴ棺" << sizeof(float *) << endl;
	cout << "char* ��ռ�ڴ棺" << sizeof(char *) << endl;

	system("pause");
	return 0;
}