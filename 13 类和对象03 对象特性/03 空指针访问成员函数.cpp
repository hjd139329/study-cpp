//#include <iostream>
//using namespace std;
//
//
////空指针访问成员函数
////在没用到this指针时可以访问
//class Person
//{
//public:
//	int m_Age;
//	void showClassNamme()
//	{
//		cout << "this class name is Person" << endl;
//	}
//	void showPersonAge()
//	{
//		if (this == NULL)//防止崩溃，提高代码健壮性
//		{
//			return;
//		}
//
//		//报错原因为传入指针为空
//		cout << "年龄为：" <<this-> m_Age << endl;
//	}
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->showClassNamme();//这个可以访问
//	p->showPersonAge();//这个报错
//}
//int main3()
//{
//	test01();
//	system("pause");
//	return 0;
//}