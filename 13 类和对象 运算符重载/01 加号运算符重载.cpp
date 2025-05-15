//#include <iostream>
//using namespace std;
//
////运算符重载：对已有的运算符进行重新定义，赋予新功能，以适应不同的数据类型
//
////1.成员函数重载+
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//	string m_Name;
//	Person operator+ (Person *p)//利用成员函数重载+
//	{
//		Person temp;
//		temp.m_A = p->m_A + this->m_A;
//		temp.m_B = p->m_B + this->m_B;
//		temp.m_Name = p->m_Name + this->m_Name;
//		return temp;
//	}
//};
//
////全局函数重载+
//Person operator+(Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	temp.m_Name = p1.m_Name + p2.m_Name;
//	return temp;
//}
//
////运算符重载也可以发生函数重载，只要传入的参数不同或顺序不同
//Person operator+(Person &p1, int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//void test01()
//{
//	Person p1;
//	Person p2;
//	p1.m_A = 1;
//	p1.m_B = 2;
//	p1.m_Name = "张三";
//	p2.m_A = 3;
//	p2.m_B = 4;
//	p2.m_Name = "李四";
//
//
//	////成员函数重载+
//	//Person p3 = p1.operator+(&p2);//利用成员函数重载+，并返回给p3
//	//cout << "p3的m_A为：" << p3.m_A << endl;//4
//	//cout << "p3的m_B为：" << p3.m_B << endl;//6
//	//cout << "p3的m_Name为：" << p3.m_Name << endl;
//	////结果为李四张三，说明p2加在前面
//
//
//	//全局函数从重载+
//	Person p3 = operator+(p1, p2);
//	cout << "p3的m_A为：" << p3.m_A << endl;//4
//	cout << "p3的m_B为：" << p3.m_B << endl;//6
//	cout << "p3的m_Name为：" << p3.m_Name << endl;//结果为张三李四，说明p2加在后面
//
//	//运算符重载也可以发生函数重载
//	Person p4;
//	p4 = p1 + 100;
//	cout << p4.m_A << p4.m_B  << endl;
//}
//
//
//
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}