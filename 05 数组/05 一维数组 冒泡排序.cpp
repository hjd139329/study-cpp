#include<iostream>
using namespace std;

int main5()
{
	//ð������
	int arr[] = { 23,24,676,45,89,46,76,88,23,999 };
	int temp = 0;
	int length = sizeof(arr) / sizeof(arr[0]);
	int pointer = 0;

	cout << "ð������ǰ��" << endl;
	for (int pre = 0; pre < length; pre++)
	{
		cout << arr[pre]<<",";
	}
	cout << endl;


	for (int i = 0; i < length-1; i++)//����������=Ԫ�ظ���-1
	{
		pointer = 0;//��ÿ����ÿ�αȽ϶�ָ��ϴ��ֵ
		for (int j = 0; j < length - 1 - i; j++)//ÿһ�ֱȽϵĴ���=Ԫ�ظ���-�����ĵڼ�����-1
		{
			//ע�����Լ�д�ģ������Ż���pointer����Ҫ��
			/*if (arr[pointer] >= arr[pointer + 1])
			{
				temp = arr[pointer];
				arr[pointer] = arr[pointer + 1];
				arr[pointer + 1] = temp;
				pointer++;
			}
			else
			{
				pointer++;
			}*/

			//�Ż���
			if (arr[j] >= arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		
	}
	
	cout << "ð�������" << endl;
	for (int aft = 0; aft < length; aft++)
	{
		cout << arr[aft]<<",";
	}
	cout << endl;

	system("pause");
	return 0;
}