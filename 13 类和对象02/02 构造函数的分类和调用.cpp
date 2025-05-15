//#include<iostream>
//using namespace std;
//
//
//
////构造函数：
////按照参数分类： 无参构造（默认构造），有参构造
////按照类型分类： 普通构造，拷贝构造
//class Person
//{
//public:
//	//无参构造
//	Person()
//	{
//		cout << "Person的无参构造调用" << endl;
//	}
//	//有参构造
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造调用" << endl;
//	}
//
//	//拷贝构造
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "Person的拷贝构造调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	int age;
//};
//
////调用
//void test01()
//{
//	//1.括号法
//	//Person p1;//默认构造调用
//	//Person p2(10);//有参构造调用，这时p2的年龄为10
//	//Person p3(p2);//拷贝构造调用，需要传进去一个Person类，这时p3的年龄也为10
//	//cout << "p2的年龄为：" << p2.age << endl;
//	//cout << "p3的年龄为：" << p3.age << endl;
//	//注意事项
//	//在进行默认构造调用时，不写（）
//	//Person p1();//这里编译器会认为这是一个函数声明，该函数p1返回Person类型
//	//编译器不会认为在创建对象
//
//	//显示法
//	Person p1;//默认构造
//	Person p2 = Person(10);//有参构造
//	Person p3 = Person(p2);//拷贝构造
//	
//	//Person(10)//匿名对象，当前执行结束后。系统会立马回收。因为没有名字无法访问
//
//	//注意事项2
//	//不要用拷贝构造函数初始化匿名对象
//	//Person(p3);//编译器会认为 Person(p3)===Person p3;  会以为对象声明，重定义
//
//
//	//隐式转换法
//	Person p4 = 10;//有参构造，相当于 Person p4 = Person(10)
//	Person p5 = p4;//拷贝构造，相当于 Person p5 = Person(p4)
//}
//int main2()
//{
//	test01();
//	system("pause");
//	return 0;
//}