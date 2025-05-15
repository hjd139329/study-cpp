//#include<iostream>
//using namespace std;
//
//class Beverage
//{
//public:
//	//煮水
//	virtual void boil() = 0;
//	//冲泡
//	virtual void brew() = 0;
//	//加入佐料
//	virtual void putsoming() = 0;
//	void makeDrinking()
//	{
//		boil();
//		brew() ;
//		putsoming();
//	}
//};
//
//class Coffee:public Beverage
//{
//public:
//	//煮水
//	virtual void boil()
//	{
//		cout << "煮咖啡水" << endl;
//	}
//	//冲泡
//	virtual void brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	//加入佐料
//	virtual void putsoming()
//	{
//		cout << "加入牛奶" << endl;
//	}
//};
//class Tea:public Beverage
//{
//public:
//	//煮水
//	virtual void boil()
//	{
//		cout << "煮茶叶水" << endl;
//	}
//	//冲泡
//	virtual void brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	//加入佐料
//	virtual void putsoming()
//	{
//		cout << "加入柠檬" << endl;
//	}
//};
//void doWork(Beverage* bev)//Beverage* bev = new Coffee
//{
//	bev->makeDrinking();
//	delete bev;
//}
//void test01()
//{
//	doWork(new Coffee);
//	cout << "---------------" << endl;
//	doWork(new Tea);
//
//}
//int main4()
//{
//	test01();
//	system("pause");
//	return 0;
//}