#include<iostream>
using namespace std;


//��ģ��ͼ̳�
template<class T>
class Base
{
public:
	T m;
};

class Son:public Base<int>//�����������ģ�壬�������֪�������T���Ͳ��ܼ̳�
{
	
};
//��������ָ�������T���ͣ�����Ҳ��Ҫ��Ϊģ��
template<class T1, class T2>

class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;

	}
	T1 obj;
};
void test02()
{
	Son2<int, char>S2;//����ָ����T1Ϊint ��T2Ϊchar������Base�е�TҲΪchar��
}
int main()
{
	test02();
	system("pause");
	return 0;
}