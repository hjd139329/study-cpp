#include<iostream>
using namespace std;
#include"MyArray.hpp"



void printIntArray(MyArray<int>&arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}


void test01()
{
	MyArray <int>arr1(5);//有参构造
	
	//MyArray<int>arr2(arr1);//拷贝构造
	//MyArray <int>arr3(100);//有参构造
	//arr3 = arr1;
	//利用尾插法插入数据
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	cout << "arr1的输出：" << endl;
	printIntArray(arr1);
	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);//拷贝构造
	cout << "arr2的打印输出：" << endl;
	printIntArray(arr2);

	arr2.Pop_Back();//尾删	
	printIntArray(arr2);
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为：" << arr2.getSize() << endl;

	
}




//测试自定义数据类型

class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};


void PrintPersonArray(MyArray<Person>&arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << "年龄：" << arr[i].m_Age << endl;

	}
}
void test02()
{
	MyArray <Person>arr1(10);
	Person p1("一", 1);
	Person p2("二", 2);
	Person p3("三", 3);
	Person p4("四", 4);
	Person p5("五", 5);
	//将数据插入数组中
	arr1.Push_Back(p1);
	arr1.Push_Back(p2);
	arr1.Push_Back(p3);
	arr1.Push_Back(p4);
	arr1.Push_Back(p5);

	PrintPersonArray(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;




}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}