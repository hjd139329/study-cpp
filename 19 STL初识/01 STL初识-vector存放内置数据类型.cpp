//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>//��׼�㷨��
//
//
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//ͨ�����������������е�����
//	vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ���һ��Ԫ��
//	vector<int>::iterator itEnd = v.end();//������������ָ�����Ԫ�ص���һ��λ��
//	//��һ�ֱ���
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//
//	//�ڶ��ֱ���
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//
//	//�����ֱ���
//	//ʹ��STL�ṩ�ı�׼�㷨��for_each() ��Ҫ����algorithum
//	for_each(v.begin(), v.end(), myPrint);
//}
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
