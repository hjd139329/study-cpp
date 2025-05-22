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
	MyArray <int>arr1(5);//�вι���
	
	//MyArray<int>arr2(arr1);//��������
	//MyArray <int>arr3(100);//�вι���
	//arr3 = arr1;
	//����β�巨��������
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	cout << "arr1�������" << endl;
	printIntArray(arr1);
	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);//��������
	cout << "arr2�Ĵ�ӡ�����" << endl;
	printIntArray(arr2);

	arr2.Pop_Back();//βɾ	
	printIntArray(arr2);
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;

	
}




//�����Զ�����������

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
		cout << "������" << arr[i].m_Name << "���䣺" << arr[i].m_Age << endl;

	}
}
void test02()
{
	MyArray <Person>arr1(10);
	Person p1("һ", 1);
	Person p2("��", 2);
	Person p3("��", 3);
	Person p4("��", 4);
	Person p5("��", 5);
	//�����ݲ���������
	arr1.Push_Back(p1);
	arr1.Push_Back(p2);
	arr1.Push_Back(p3);
	arr1.Push_Back(p4);
	arr1.Push_Back(p5);

	PrintPersonArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;




}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}