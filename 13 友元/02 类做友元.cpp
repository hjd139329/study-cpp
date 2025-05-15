//#include<iostream>
//using namespace std;
//#include<string>
//
////总结：
////1.类做友元，只需要在要访问的类前面加上	friend class GoodGay;  即可
////2.在类外实现成员函数，需要先在类内定义
////3.尽量把先用到的类或者函数写在上面
//
////Building类
//class Building
//{
//	friend class GoodGay;//类做友元
//public:
//	string m_SittingRoom;
//	Building();//构造函数
//private:
//	string m_BedRooom;
//};
//
////类外写成员函数(要在类外写成员函数，必须在类内定义声明)
//Building::Building()
//{
//	m_BedRooom = "卧室";
//	m_SittingRoom = "客厅";
//}
//
//
////GoodGye类
//class GoodGay
//{
//public:
//	//类内声明，类外定义成员函数
//	GoodGay();//构造函数
//	void visit();//参观函数
//	Building * building;//创建Building类型的指针building
//};
//
////类外写成员函数(要在类外写成员函数，必须在类内定义声明)
////GoodGye的构造函数
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
////GoodGay的visit函数
//void GoodGay::visit()
//{
//	cout << "正在访问：" << building->m_SittingRoom << endl;
//	cout << "正在访问：" << building->m_BedRooom << endl;
//
//}
//
//
//
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main2()
//{
//	test01();
//	system("pause");
//	return 0;
//}