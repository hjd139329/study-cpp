#include<iostream>
using namespace std;
#include<cmath>
#include"circle.h"
#include"dot.h"

//设计一个类，判断点和圆的关系
//圆外，圆上， 圆内


//点类
//class Dot
//{
//private:
//	double Dot_X;
//	double Dot_Y;
//public:
//	void set_Dot_X(double x)
//	{
//		Dot_X = x;
//	}
//	void set_Dot_Y(double y)
//	{
//		Dot_Y = y;
//	}
//	double get_Dot_X()
//	{
//		return Dot_X;
//	}
//	double get_Dot_Y()
//	{
//		return Dot_Y;
//	}
//};

//圆类
//class Circle
//{
//public:
//	//设置半径，获取半径，设置圆心，获取圆心
//	void set_Radius(double r)
//	{
//		Radius = r;
//	}
//	void set_Center(Dot c)
//	{
//		Center = c;
//	}
//	double get_Radius()
//	{
//		return Radius;
//	}
//	//在类中可以把另一个类作为成员
//	Dot get_Center()
//	{
//		return Center;
//	}
//private:
//	//属性：圆心(坐标)，半径
//	Dot Center;
//	double Radius;
//
//};



//函数：求两点距离
//全局函数，判断圆和点关系
void isInCircle(Circle &c, Dot &d)
{
	//计算两点之间距离的平方
	double distance =
		(c.get_Center().get_Dot_X() - d.get_Dot_X()) * (c.get_Center().get_Dot_X() - d.get_Dot_X()) +
		(c.get_Center().get_Dot_Y() - d.get_Dot_Y()) * (c.get_Center().get_Dot_Y() - d.get_Dot_Y());
	//计算圆半径的平方
	double RR = c.get_Radius() * c.get_Radius();
	//判断两点之间关系
	if (distance > RR)
	{
		cout << "点在圆外" << endl;
	}
	else if (distance == RR)
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	Circle c1;
	//给半径赋值
	c1.set_Radius(10);

	//创建一个圆心（10，0）
	Dot center;
	center.set_Dot_X(10);
	center.set_Dot_Y(0);
	c1.set_Center(center);
	
	//创建一个点（10，10）
	Dot d1;
	d1.set_Dot_X(10);
	d1.set_Dot_Y(9);
	
	isInCircle(c1, d1);
	system("pause");
	return 0;
}