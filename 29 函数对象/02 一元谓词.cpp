//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//
//һԪν�ʣ�����һ���������ҷ���bool���͵ķº���

//struct GreaterFive
//{
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "û�ҵ�";
//	}
//	else
//	{
//		cout << "�ҵ���" << *it << endl;
//	}
//
//}
//int main2()
//{
//	test01();
//	system("pause");
//	return 0;
//}