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
//在类中可以把另一个类作为成员
Dot Circle:: get_Center()
{
	return Center;
}
