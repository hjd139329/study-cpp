#pragma once
#include<iostream>
using namespace std;
#include"dot.h"


class Circle
{
public:
	//���ð뾶����ȡ�뾶������Բ�ģ���ȡԲ��
	void set_Radius(double r);
	void set_Center(Dot c);

	double get_Radius();

	//�����п��԰���һ������Ϊ��Ա
	Dot get_Center();

private:
	//���ԣ�Բ��(����)���뾶
	Dot Center;
	double Radius;

};