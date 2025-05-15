#include<iostream>
using namespace std;

void swap(int* p1, int* p2)
{
	int temp = * p1;
	*p1 = *p2;
	*p2 = temp;
}
int main6()
{

	//值传递，不改变实参


	//地址传递，改变实参

	int a = 10;
	int b = 20;
	swap(&a, &b);
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}