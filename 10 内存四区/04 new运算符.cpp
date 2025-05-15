#include<iostream>
using namespace std;




int* func()
{
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	delete p;//利用delete可以释放new开辟的内存
}

//利用new开辟数组
void test02()
{
	int *arr = new int[10];//会返回数组的首地址，用指针接受就行，且这里的10代表数组有10个元素
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int j = 0; j < 10; j++)
	{
		cout << arr[j] << endl;
	}
	//如果要释放数组，delete []  ,需要加[]
	//delete[] arr;
}

int main()
{
	/*test01();*/
	test02();
	system("pause");
	return 0;
}
