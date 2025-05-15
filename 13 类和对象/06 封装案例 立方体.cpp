//#include<iostream>
//using namespace std;
//
////设计一个立方体类，获取面积和体积
////并使用全局函数和成员函数判断两个立方体是否相等
//class Cube
//{
//private://私有权限
//	int m_h;
//	int m_w;
//	int m_l;
//public://提供公共接口
//	int get_Area()//面积
//	{
//		return  2 * m_h * m_l + 2 * m_w * m_h + 2 * m_w * m_l;
//	}
//	int get_Volume()//体积
//	{
//		return  m_h * m_l * m_w ;
//	}
//	//公共接口，修改长宽高
//	void set_w(int w)
//	{
//		m_w = w;
//	}
//	void set_h(int h)
//	{
//		m_h = h;
//	}void set_l(int l)
//	{
//		m_l = l;
//	}
//	//公共接口获取长宽高
//	int get_l()
//	{
//		return m_l;
//	}
//	int get_w()
//	{
//		return m_w;
//	}	
//	int get_h()
//	{
//		return m_h;
//	}
//	bool isSameByClass(Cube &c)
//	{
//		return (m_h == c.get_h() && m_l == c.get_l() &&m_w  == c.get_w());
//	}
//};
//
////全局函数判断两个立方体是否相等
//bool isSame(Cube& c1, Cube& c2)
//{
//	return (c1.get_h() == c2.get_h() && c1.get_l() == c2.get_l() && c1.get_w() == c2.get_w());
//}
//
//int main6()
//{
//	Cube c1;
//	c1.set_h(10);
//	c1.set_w(10);
//	c1.set_l(10);
//	cout << "c1的面积为：" << c1.get_Area() << endl;
//	cout << "c1的体积为：" << c1.get_Volume() << endl;
//	Cube c2;
//	c2.set_h(10);
//	c2.set_w(10);
//	c2.set_l(10);
//
//	//全局函数判断，需要传两个参数
//	int ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "c1和c2是不相等的" << endl;
//	}
//	//利用成员函数判断，需要传一个参数与类本身对比，
//	
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "成员函数判断：c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "成员函数判断：c1和c2是不相等的" << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}