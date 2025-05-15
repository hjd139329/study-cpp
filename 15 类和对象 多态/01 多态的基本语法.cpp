//#include<iostream>
//using namespace std;
//
////多态的条件
////1.要有继承关系
////2.子类要重写父类的虚函数（重写和重载不同）
////重写：函数返回值 函数名 函数参数列表完全相同
//class Animal
//{
//public:
//	//不加virtual，函数在执行时是早绑定，编译阶段就确定地址
//	//要想在运行阶段再确定地址就需要加上virtual，变成虚函数
//
//	virtual void  speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
//
////多态的使用：父类的指针或引用，指向子类对象
//void doSpeak(Animal &animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}