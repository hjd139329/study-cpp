#include<iostream>
using namespace std;

int main3()
{

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "��������ֻС�������" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "aС��Ϊ��" << a<< endl;
	cout << "bС��Ϊ��" << b<< endl;
	cout << "cС��Ϊ��" << c<< endl;

	if (a == b && a == c)
	{
		cout << "��ֻС��һ����" << endl;
	}
	else
	{
		if (a >= b)
		{
			if (a == b)
			{
				cout << "a��bһ����" << endl;
			}
			else
			{
				cout << "a��b��" << endl;
			}
			if (a >= c)
			{
				if (a == c)
				{
					cout << "a��cһ�����أ�Ϊ��" << a << endl;
				}
				else
				{
					cout << "a���أ�Ϊ��" << a << endl;
				}
			}
			else
			{
				cout << "c���أ�Ϊ��" << c << endl;
			}
		}
		else
		{
			cout << "b��a��" << endl;
			if (b >= c)
			{
				if (b == c)
				{
					cout << "b��cһ�����أ�Ϊ��" << b << endl;
				}
				else
				{
					if (a == c)
					{
						cout << "a��cһ����" << endl;
					}
					cout << "b���أ�Ϊ��" << b << endl;
				}
			}
			else
			{
				cout << "c���أ�Ϊ��" << c << endl;
			}
		}
	}
	



	system("pause");
	return 0;

}