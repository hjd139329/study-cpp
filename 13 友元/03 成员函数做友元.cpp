#include<iostream>
using namespace std;



class Building;//�ȸ��߱�����������ᶨ��Building���Ȳ�Ҫ����
class GoodGay
{
public:
	GoodGay();//���캯��
	void vist();//��visit���Է���building���е�˽�г�Ա
	void vist2();//visit2�����Է���building���е�˽�г�Ա
	Building* building;
};
class Building
{
	friend void GoodGay::vist();
	//���߱����� void GoodGay::vist() ���������Building����Ԫ�����Է���˽������
public:
	Building();//���캯��������Ҫ����ֵ
	string m_SittingRoom;
private:
	string m_BedRoom;
};

//����ʵ�ֺ���
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::vist()
{
	cout << "visit���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit���ڷ��ʣ�" << building->m_BedRoom << endl;

}
void GoodGay::vist2()
{
	cout << "visit2���ڷ��ʣ�" << building->m_SittingRoom << endl;

}

Building::Building()
{
	m_BedRoom = "����";
	m_SittingRoom = "����";
}
void test01()
{
	GoodGay gg;
	gg.vist();
	gg.vist2();
}
int main()
{
	test01();
	system("pause");
	return 0;
}