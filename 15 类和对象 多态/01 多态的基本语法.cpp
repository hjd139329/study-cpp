//#include<iostream>
//using namespace std;
//
////��̬������
////1.Ҫ�м̳й�ϵ
////2.����Ҫ��д������麯������д�����ز�ͬ��
////��д����������ֵ ������ ���������б���ȫ��ͬ
//class Animal
//{
//public:
//	//����virtual��������ִ��ʱ����󶨣�����׶ξ�ȷ����ַ
//	//Ҫ�������н׶���ȷ����ַ����Ҫ����virtual������麯��
//
//	virtual void  speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//
//
////��̬��ʹ�ã������ָ������ã�ָ���������
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