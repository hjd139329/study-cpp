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

	delete p;//����delete�����ͷ�new���ٵ��ڴ�
}

//����new��������
void test02()
{
	int *arr = new int[10];//�᷵��������׵�ַ����ָ����ܾ��У��������10����������10��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int j = 0; j < 10; j++)
	{
		cout << arr[j] << endl;
	}
	//���Ҫ�ͷ����飬delete []  ,��Ҫ��[]
	//delete[] arr;
}

int main()
{
	/*test01();*/
	test02();
	system("pause");
	return 0;
}
