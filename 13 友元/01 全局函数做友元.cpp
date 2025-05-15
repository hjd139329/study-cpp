//#include <iostream>
//using namespace std;
//
//
//class Building
//{
//	friend void goodGay(Building* building);
//	//加上friend，可以让某一函数访问私有成员
//public:
//	Building()
//	{
//		m_bedRoom = "卧室";
//		m_sittingRoom = "客厅";
//	}
//public:
//	string m_sittingRoom;
//private:
//	string m_bedRoom;
//};
//
//void goodGay(Building *building)
//{
//	cout << "好基友正在访问：" << building->m_sittingRoom << endl;
//	cout << "好基友正在访问：" << building->m_bedRoom<< endl;
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