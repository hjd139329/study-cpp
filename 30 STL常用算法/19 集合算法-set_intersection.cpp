//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<numeric>
//
////������ԭ��������ʱ��������
//void myPrint(int val)
//{
//	cout << val << "  ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
//	//ȡ���������������һ������Ԫ�ذ�����һ������Ԫ��
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	//���ص�����������ֵ�ǽ��������һ��Ԫ��λ��
//	vector<int>::iterator it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), it, myPrint);
//	
//
//}
//int main19()
//{
//	test01();
//	system("pause");
//	return 0;
//}