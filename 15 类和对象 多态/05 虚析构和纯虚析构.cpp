//#include<iostream>
//using namespace std;
//
////���������п��ٵ����������ݡ���Ҫ������������������
////�����������Ҳ�п��ٵ����������ݣ������ô�������
//class Animal
//{
//public:
//
//	//���麯��
//	virtual void speak() = 0;
//	Animal()
//	{
//		cout << "Animal���캯��" << endl;
//	}
//	//virtual ~Animal()//�������������Խ������ָ���޷����������鹹����������
//	//{
//	//	cout << "Animal����������" << endl;
//	//}
//	//�������������˴��������������Ҳ���ڳ�����
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()//��������ʵ��
//{
//	cout << "Animal������������" << endl;
//}
//class Cat :public Animal
//{
//public:
//	virtual void speak()
//	{
//		cout <<*m_Name<< "cat��" << endl;
//	}
//	Cat(string name)
//	{
//		cout << "Cat���캯��" << endl;
//		m_Name = new string(name);
//	}
//	~Cat()
//	{
//		cout << "Cat��������" <<endl;
//		if (m_Name != NULL)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//����ָ��������ʱ������������������������������������ж������������ڴ�й¶
//	delete animal;
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}