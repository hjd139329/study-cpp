#include<iostream>
using namespace std;
#include<vector>


void test01()
{
	vector<int>v;
	int num = 0;
	int* p = NULL;
	//ʹ��reserveԤ���ռ䣬��������Ѱ�ҿռ����
	v.reserve(100000);//Ԥ��100000
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num����" << num << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}
