//#include<iostream>
//using namespace std;
//
////���һ���������࣬��ȡ��������
////��ʹ��ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
//class Cube
//{
//private://˽��Ȩ��
//	int m_h;
//	int m_w;
//	int m_l;
//public://�ṩ�����ӿ�
//	int get_Area()//���
//	{
//		return  2 * m_h * m_l + 2 * m_w * m_h + 2 * m_w * m_l;
//	}
//	int get_Volume()//���
//	{
//		return  m_h * m_l * m_w ;
//	}
//	//�����ӿڣ��޸ĳ����
//	void set_w(int w)
//	{
//		m_w = w;
//	}
//	void set_h(int h)
//	{
//		m_h = h;
//	}void set_l(int l)
//	{
//		m_l = l;
//	}
//	//�����ӿڻ�ȡ�����
//	int get_l()
//	{
//		return m_l;
//	}
//	int get_w()
//	{
//		return m_w;
//	}	
//	int get_h()
//	{
//		return m_h;
//	}
//	bool isSameByClass(Cube &c)
//	{
//		return (m_h == c.get_h() && m_l == c.get_l() &&m_w  == c.get_w());
//	}
//};
//
////ȫ�ֺ����ж������������Ƿ����
//bool isSame(Cube& c1, Cube& c2)
//{
//	return (c1.get_h() == c2.get_h() && c1.get_l() == c2.get_l() && c1.get_w() == c2.get_w());
//}
//
//int main6()
//{
//	Cube c1;
//	c1.set_h(10);
//	c1.set_w(10);
//	c1.set_l(10);
//	cout << "c1�����Ϊ��" << c1.get_Area() << endl;
//	cout << "c1�����Ϊ��" << c1.get_Volume() << endl;
//	Cube c2;
//	c2.set_h(10);
//	c2.set_w(10);
//	c2.set_l(10);
//
//	//ȫ�ֺ����жϣ���Ҫ����������
//	int ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�ǲ���ȵ�" << endl;
//	}
//	//���ó�Ա�����жϣ���Ҫ��һ���������౾��Աȣ�
//	
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "��Ա�����жϣ�c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "��Ա�����жϣ�c1��c2�ǲ���ȵ�" << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}