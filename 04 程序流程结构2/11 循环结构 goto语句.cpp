#include<iostream>
using namespace std;

int main()
{

	//goto,��Ǵ��ڣ���ս�����λ�ã����Ƽ�ʹ��
	cout << "1" << endl;
	cout << "2" << endl;

	goto Flag;
	cout << "3" << endl;
	cout << "4" << endl;

Flag:
	cout << "5" << endl;
	cout << "6" << endl;


	system("pause");
	return 0;
}