#include<iostream>
using namespace std;
int main()
{
	// ��&&  ��||  �ǣ�
	int a1 = 100;//��c++��ֻҪ����0����Ϊ��
	int b1 = 0;
	cout << (a1 && b1) << endl;//  ��&&  ����Ϊ�棬����Ϊ��
	cout << (a1 || b1) << endl;//  ��||  ����Ϊ��  ����Ϊ��
	cout << !!a1 << endl;//����  �Ƿ� Ϊԭֵ
	cout << !b1 << endl;

	system("pause");
	return 0;

}