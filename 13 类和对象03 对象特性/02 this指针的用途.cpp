//#include<iostream>
//using namespace std;
//
//
////this指针的用途
////1.解决名称冲突
//
//class Person
//{
//public:
//	int age;
//	Person(int age)
//	{
//		//this指向被调用的成员函数所属的对象
//		this->age = age;
//	}
//	Person& PersonAddAge(Person p)
//	{
//		this->age += p.age;
//		return *this;//用*this返回对象本体
//	}
//
//};
//
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
//
////2.返回对象本体用*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	//p2.PersonAddAge(p1)  这个最后返回的是p2的本体，所以可以
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//链式编程
//
//	cout << "p2的年龄为：" << p2.age<<endl;
//}
//
//int main2() 
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}