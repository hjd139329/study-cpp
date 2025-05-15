//#include<iostream>
//using namespace std;
//
////当子类中有开辟到堆区的数据。需要父类虚析构或纯虚析构
////而如果父类中也有开辟到堆区的数据，就是用纯虚析构
//class Animal
//{
//public:
//
//	//纯虚函数
//	virtual void speak() = 0;
//	Animal()
//	{
//		cout << "Animal构造函数" << endl;
//	}
//	//virtual ~Animal()//虚析构函数可以解决父类指针无法调用子类虚构函数的问题
//	//{
//	//	cout << "Animal虚析构函数" << endl;
//	//}
//	//纯虚析构，有了纯虚析构后，这个类也属于抽象类
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()//纯虚析构实现
//{
//	cout << "Animal纯虚析构函数" << endl;
//}
//class Cat :public Animal
//{
//public:
//	virtual void speak()
//	{
//		cout <<*m_Name<< "cat叫" << endl;
//	}
//	Cat(string name)
//	{
//		cout << "Cat构造函数" << endl;
//		m_Name = new string(name);
//	}
//	~Cat()
//	{
//		cout << "Cat析构函数" <<endl;
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
//	//父类指针在析构时，不会调用子类的析构函数，导致如果子类有堆区，会数据内存泄露
//	delete animal;
//}
//int main5()
//{
//	test01();
//	system("pause");
//	return 0;
//}