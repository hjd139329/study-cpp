#include"circle.h"



void Circle:: set_Radius(double r)
{
	Radius = r;
}
void  Circle:: set_Center(Dot c)
{
	Center = c;
}
double Circle::get_Radius()
{
	return Radius;
}
//�����п��԰���һ������Ϊ��Ա
Dot Circle:: get_Center()
{
	return Center;
}
