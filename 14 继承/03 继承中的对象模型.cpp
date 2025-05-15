//#include<iostream>
//using namespace std;
//
//
////虽然子类在继承后，无法访问父类的隐私内容，但是编译器还是会继承
////只是在继承后编译器自动隐藏了子类从父类中继承的隐私内容
//
////可以利用开发人员命令提示工具查看对象模型
////1.跳转盘符
////2.跳转文件目录 cd 具体路径下
////3.cl /d1 reportSingleClassLayont类名 文件名   （第一个为L，第二个为1）
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base1
//{
//public:
//	int m_AA;
//};
//
//void test01()
//{
//	cout << "size of Son:" << sizeof(Son) << endl;
//}
//int main3()
//{
//	test01();
//	system("pause");
//	return 0;
//}