#include<iostream>
using namespace std;

//l菱形继承带来的问题是子类继承了两份相同的数据，导致资源浪费
class Animal
{
public:
	int m_Age;
};


//实际上，我们只需要一个年龄，但是Sheep和Tuo都继承了年龄
//所以为了解决这个问题，用到虚继承 加上virtual
class Sheep:public virtual Animal{};//此时Animal被称为虚基类
class Tuo :public virtual Animal {};
//加上virtual后，两份继承公用一个年龄
//此时，他们的年龄本质上时指向同一个地方的指针(vbptr指针)

class SheepTuo :public Sheep, public Tuo
{
public:

};

void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << "继承Sheep的年龄" << st.Sheep::m_Age << endl;
	cout << "继承Tuo的年龄" << st.Tuo::m_Age << endl;
	//实际上我们只需要一个年龄，当使用了虚继承后，三个年龄为向同一个
	cout << "SheepTuo的年龄" << st.m_Age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}