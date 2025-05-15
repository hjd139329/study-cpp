//#include<iostream>
//using namespace std;
//
//
////对扩展开放，对修改关闭
////提倡使用多态，多态的好处：
////1、结构清晰
////2、可读性强
////3、便于后期维护	
//class Calculator
//{
//public:
//	int m_A;
//	int m_B;
//	int getresult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_A + m_B;
//		}
//		else if (oper == "-")
//		{
//			return m_A - m_B;
//		}
//		else if (oper == "*")
//		{
//			return m_A * m_B;
//		}
//	}
//};
//
////创建多态的父类
//class AbstractCalculator
//{
//public:
//	int m_Num1;
//	int m_Num2;
//	virtual int getResult()
//	{
//		return 0;
//	}
//};
//
////加法计算器类
//class AddCalculator : public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
////减法计算器类
//class SubCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////乘法计算器类
//class MulCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//void test01()
//{
//	Calculator c;
//	c.m_A = 10;
//	c.m_B = 20;
//	cout << "+" << c.getresult("+") << endl;
//}
//void test02()
//{
//	AbstractCalculator* add = new AddCalculator;
//	add->m_Num1 = 100;
//	add->m_Num2 = 200;
//	cout << add->m_Num1 << "+" << add->m_Num2 << "=" << add->getResult() << endl;
//	AbstractCalculator* sub = new SubCalculator;
//	sub->m_Num1 = 300;
//	sub->m_Num2 = 400;
//	cout << sub->m_Num1 << "-" << sub->m_Num2 << "=" << sub->getResult() << endl;
//	AbstractCalculator* mul = new MulCalculator;
//	mul->m_Num1 = 50;
//	mul->m_Num2 = 60;
//	cout << mul->m_Num1 << "*" << mul->m_Num2 << "=" << mul->getResult() << endl;
//	delete add, sub, mul;
//}
//int main2()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}