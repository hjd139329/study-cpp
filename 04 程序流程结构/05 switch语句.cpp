#include<iostream>
using namespace std;

int main()
{

	//�Ե�Ӱ���д��
	//switch���ȱ�㣺ֻ���ж����ͻ����ַ��ͣ������ж�����
	//�ŵ㣺�ṹ����
	int score = 0;
	cout << "����������ķ���" << endl;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	switch (score)
	{
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ܺÿ�" << endl;
		break;
	default:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	}
	system("pause");
	return 0;

}