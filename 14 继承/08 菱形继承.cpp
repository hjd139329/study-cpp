#include<iostream>
using namespace std;

//l���μ̳д���������������̳���������ͬ�����ݣ�������Դ�˷�
class Animal
{
public:
	int m_Age;
};


//ʵ���ϣ�����ֻ��Ҫһ�����䣬����Sheep��Tuo���̳�������
//����Ϊ�˽��������⣬�õ���̳� ����virtual
class Sheep:public virtual Animal{};//��ʱAnimal����Ϊ�����
class Tuo :public virtual Animal {};
//����virtual�����ݼ̳й���һ������
//��ʱ�����ǵ����䱾����ʱָ��ͬһ���ط���ָ��(vbptrָ��)

class SheepTuo :public Sheep, public Tuo
{
public:

};

void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << "�̳�Sheep������" << st.Sheep::m_Age << endl;
	cout << "�̳�Tuo������" << st.Tuo::m_Age << endl;
	//ʵ��������ֻ��Ҫһ�����䣬��ʹ������̳к���������Ϊ��ͬһ��
	cout << "SheepTuo������" << st.m_Age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}