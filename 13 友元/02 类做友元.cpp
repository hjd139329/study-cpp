//#include<iostream>
//using namespace std;
//#include<string>
//
////�ܽ᣺
////1.������Ԫ��ֻ��Ҫ��Ҫ���ʵ���ǰ�����	friend class GoodGay;  ����
////2.������ʵ�ֳ�Ա��������Ҫ�������ڶ���
////3.���������õ�������ߺ���д������
//
////Building��
//class Building
//{
//	friend class GoodGay;//������Ԫ
//public:
//	string m_SittingRoom;
//	Building();//���캯��
//private:
//	string m_BedRooom;
//};
//
////����д��Ա����(Ҫ������д��Ա���������������ڶ�������)
//Building::Building()
//{
//	m_BedRooom = "����";
//	m_SittingRoom = "����";
//}
//
//
////GoodGye��
//class GoodGay
//{
//public:
//	//�������������ⶨ���Ա����
//	GoodGay();//���캯��
//	void visit();//�ιۺ���
//	Building * building;//����Building���͵�ָ��building
//};
//
////����д��Ա����(Ҫ������д��Ա���������������ڶ�������)
////GoodGye�Ĺ��캯��
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
////GoodGay��visit����
//void GoodGay::visit()
//{
//	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "���ڷ��ʣ�" << building->m_BedRooom << endl;
//
//}
//
//
//
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main2()
//{
//	test01();
//	system("pause");
//	return 0;
//}