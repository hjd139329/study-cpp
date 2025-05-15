#include<iostream>
using namespace std;



class Building;//先告诉编译器，下面会定义Building，先不要报错
class GoodGay
{
public:
	GoodGay();//构造函数
	void vist();//让visit可以访问building类中的私有成员
	void vist2();//visit2不可以访问building类中的私有成员
	Building* building;
};
class Building
{
	friend void GoodGay::vist();
	//告诉编译器 void GoodGay::vist() 这个函数是Building的友元，可以访问私有属性
public:
	Building();//构造函数，不需要返回值
	string m_SittingRoom;
private:
	string m_BedRoom;
};

//类外实现函数
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::vist()
{
	cout << "visit正在访问：" << building->m_SittingRoom << endl;
	cout << "visit正在访问：" << building->m_BedRoom << endl;

}
void GoodGay::vist2()
{
	cout << "visit2正在访问：" << building->m_SittingRoom << endl;

}

Building::Building()
{
	m_BedRoom = "卧室";
	m_SittingRoom = "客厅";
}
void test01()
{
	GoodGay gg;
	gg.vist();
	gg.vist2();
}
int main()
{
	test01();
	system("pause");
	return 0;
}