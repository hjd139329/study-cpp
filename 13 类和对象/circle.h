#pragma once
#include<iostream>
using namespace std;
#include"dot.h"


class Circle
{
public:
	//设置半径，获取半径，设置圆心，获取圆心
	void set_Radius(double r);
	void set_Center(Dot c);

	double get_Radius();

	//在类中可以把另一个类作为成员
	Dot get_Center();

private:
	//属性：圆心(坐标)，半径
	Dot Center;
	double Radius;

};