//#include<iostream>
//using namespace std;
//
//class Beverage
//{
//public:
//	//��ˮ
//	virtual void boil() = 0;
//	//����
//	virtual void brew() = 0;
//	//��������
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
//	//��ˮ
//	virtual void boil()
//	{
//		cout << "�󿧷�ˮ" << endl;
//	}
//	//����
//	virtual void brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	//��������
//	virtual void putsoming()
//	{
//		cout << "����ţ��" << endl;
//	}
//};
//class Tea:public Beverage
//{
//public:
//	//��ˮ
//	virtual void boil()
//	{
//		cout << "���Ҷˮ" << endl;
//	}
//	//����
//	virtual void brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	//��������
//	virtual void putsoming()
//	{
//		cout << "��������" << endl;
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