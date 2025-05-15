//#include<iostream>
//using namespace std;
//
////语法：class 子类 ：继承方式 父类
//// 子类 也称为派生类
//// 父类 也成为基类
////
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页.公开课" << endl;
//	}
//	void footer()
//	{
//		cout << "站内地图，帮助中心" << endl;
//
//	}
//	void left()
//	{
//		cout << "Java，C++" << endl;
//	}
//};
//
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java课程" << endl;
//	}
//};
//
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python课程" << endl;
//	}
//};
//
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPP课程" << endl;
//	}
//};
//
//void test01()
//{
//	//java
//	cout << "Java页面如下：" << endl;
//	Java ja;
//	ja.header();
//	ja.content();
//	ja.footer();
//	ja.left();
//	cout << "----------------" << endl;
//	//python
//	cout << "Python页面如下：" << endl;
//	Python py;
//	py.header();
//	py.content();
//	py.footer();
//	py.left();
//	cout << "----------------" << endl;
//
//	//C++
//	cout << "C++页面如下：" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.content();
//	cpp.footer();
//	cpp.left();
//	cout << "----------------" << endl;
//}
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}