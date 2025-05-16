#include<iostream>
using namespace std;


//类模板和继承
template<class T>
class Base
{
public:
	T m;
};

class Son:public Base<int>//如果父类是类模板，子类必须知道父类的T类型才能继承
{
	
};
//如果想灵活指定父类的T类型，子类也需要变为模板
template<class T1, class T2>

class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;

	}
	T1 obj;
};
void test02()
{
	Son2<int, char>S2;//这里指定了T1为int ，T2为char，父类Base中的T也为char，
}
int main()
{
	test02();
	system("pause");
	return 0;
}