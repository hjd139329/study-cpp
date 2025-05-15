//#include<iostream>
//using namespace std;
//
////成员属性设置为私有
////1.控制成员的可读可写权限
////2.对于写可以检验数据有效性
//
//class Person
//{
//private:
//	string m_Name;
//	int m_Age = 18;
//	string m_Idol;
//	//实现姓名：可读可写
//	//年龄：只读
//	//偶像：只写
//public:
//	//写姓名
//	void set_Name (string name)
//	{
//		m_Name = name;
//	}
//	//读姓名
//	void get_Name()
//	{
//		cout << "姓名：" << m_Name << endl;
//	}
//	//读年龄
//	void get_Age()
//	{
//		cout << "年龄：" << m_Age << endl;
//	}
//	//检验输入有效性
//	void set_Age(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "年龄输入有误，赋值失败！" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//写偶像
//	void set_Idol(string Idol)
//	{
//		m_Idol = Idol;
//	}
//};
//int main5()
//{
//	Person p1;
//	p1.set_Name("张三");//写姓名
//	p1.get_Name();//读姓名
//	p1.get_Age();//读年龄
//	p1.set_Idol("李四");//写偶像
//
//	system("pause");
//	return 0;
//}