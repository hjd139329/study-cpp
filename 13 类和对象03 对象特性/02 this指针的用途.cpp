//#include<iostream>
//using namespace std;
//
//
////thisָ�����;
////1.������Ƴ�ͻ
//
//class Person
//{
//public:
//	int age;
//	Person(int age)
//	{
//		//thisָ�򱻵��õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//	Person& PersonAddAge(Person p)
//	{
//		this->age += p.age;
//		return *this;//��*this���ض�����
//	}
//
//};
//
//void test01()
//{
//	Person p1(18);
//	cout << "p1������Ϊ��" << p1.age << endl;
//}
//
////2.���ض�������*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	//p2.PersonAddAge(p1)  �����󷵻ص���p2�ı��壬���Կ���
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//��ʽ���
//
//	cout << "p2������Ϊ��" << p2.age<<endl;
//}
//
//int main2() 
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}