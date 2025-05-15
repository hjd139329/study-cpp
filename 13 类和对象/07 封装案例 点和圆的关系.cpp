#include<iostream>
using namespace std;
#include<cmath>
#include"circle.h"
#include"dot.h"

//���һ���࣬�жϵ��Բ�Ĺ�ϵ
//Բ�⣬Բ�ϣ� Բ��


//����
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

//Բ��
//class Circle
//{
//public:
//	//���ð뾶����ȡ�뾶������Բ�ģ���ȡԲ��
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
//	//�����п��԰���һ������Ϊ��Ա
//	Dot get_Center()
//	{
//		return Center;
//	}
//private:
//	//���ԣ�Բ��(����)���뾶
//	Dot Center;
//	double Radius;
//
//};



//���������������
//ȫ�ֺ������ж�Բ�͵��ϵ
void isInCircle(Circle &c, Dot &d)
{
	//��������֮������ƽ��
	double distance =
		(c.get_Center().get_Dot_X() - d.get_Dot_X()) * (c.get_Center().get_Dot_X() - d.get_Dot_X()) +
		(c.get_Center().get_Dot_Y() - d.get_Dot_Y()) * (c.get_Center().get_Dot_Y() - d.get_Dot_Y());
	//����Բ�뾶��ƽ��
	double RR = c.get_Radius() * c.get_Radius();
	//�ж�����֮���ϵ
	if (distance > RR)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance == RR)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main()
{
	Circle c1;
	//���뾶��ֵ
	c1.set_Radius(10);

	//����һ��Բ�ģ�10��0��
	Dot center;
	center.set_Dot_X(10);
	center.set_Dot_Y(0);
	c1.set_Center(center);
	
	//����һ���㣨10��10��
	Dot d1;
	d1.set_Dot_X(10);
	d1.set_Dot_Y(9);
	
	isInCircle(c1, d1);
	system("pause");
	return 0;
}