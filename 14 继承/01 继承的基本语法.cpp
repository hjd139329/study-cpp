//#include<iostream>
//using namespace std;
//
////�﷨��class ���� ���̳з�ʽ ����
//// ���� Ҳ��Ϊ������
//// ���� Ҳ��Ϊ����
////
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ.������" << endl;
//	}
//	void footer()
//	{
//		cout << "վ�ڵ�ͼ����������" << endl;
//
//	}
//	void left()
//	{
//		cout << "Java��C++" << endl;
//	}
//};
//
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java�γ�" << endl;
//	}
//};
//
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python�γ�" << endl;
//	}
//};
//
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPP�γ�" << endl;
//	}
//};
//
//void test01()
//{
//	//java
//	cout << "Javaҳ�����£�" << endl;
//	Java ja;
//	ja.header();
//	ja.content();
//	ja.footer();
//	ja.left();
//	cout << "----------------" << endl;
//	//python
//	cout << "Pythonҳ�����£�" << endl;
//	Python py;
//	py.header();
//	py.content();
//	py.footer();
//	py.left();
//	cout << "----------------" << endl;
//
//	//C++
//	cout << "C++ҳ�����£�" << endl;
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