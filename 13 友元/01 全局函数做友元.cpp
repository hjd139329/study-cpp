//#include <iostream>
//using namespace std;
//
//
//class Building
//{
//	friend void goodGay(Building* building);
//	//����friend��������ĳһ��������˽�г�Ա
//public:
//	Building()
//	{
//		m_bedRoom = "����";
//		m_sittingRoom = "����";
//	}
//public:
//	string m_sittingRoom;
//private:
//	string m_bedRoom;
//};
//
//void goodGay(Building *building)
//{
//	cout << "�û������ڷ��ʣ�" << building->m_sittingRoom << endl;
//	cout << "�û������ڷ��ʣ�" << building->m_bedRoom<< endl;
//
//}
//
//void test01()
//{
//	Building building;
//	goodGay(&building);
//}
//int main1()
//{
//	test01();
//	system("pause");
//	return 0;
//}