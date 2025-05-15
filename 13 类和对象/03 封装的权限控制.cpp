//#include<iostream>
//using namespace std;
//
////访问权限，行为和成员都遵循
////1.公共权限(public)：  成员  类内可以访问 类外也可以访问
////2.保护权限(protected)：  成员  类内可以访问 类外不可以访问，儿子可以访问父亲的保护内容
////3.私有权限(private)：  成员  类内可以访问 类外不可以访问，儿子不可以访问父亲的私有内容
//
//class Person
//{
//public:
//	//公共权限
//	string m_Name;
//protected:
//	//保护权限
//	string m_Car;
//private:
//	//私有权限
//	int m_Password;
//public:
//	//若把函数权限改保护或者私有，则类外也访问不到
//	void func()
//	{
//		//类内都可以访问
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//};
//int main3()
//{
//	Person p1;
//	p1.m_Name = "李四";
//	//p1.m_Car = "奔驰"//保护权限的内容，类外访问不到
//	//p1.m_Password = 1223;//私有权限的内容，类外访问不到
//	system("pause");
//	return 0;
//}