//#include<iostream>
//using namespace std;
//
////��Ա��������Ϊ˽��
////1.���Ƴ�Ա�Ŀɶ���дȨ��
////2.����д���Լ���������Ч��
//
//class Person
//{
//private:
//	string m_Name;
//	int m_Age = 18;
//	string m_Idol;
//	//ʵ���������ɶ���д
//	//���䣺ֻ��
//	//ż��ֻд
//public:
//	//д����
//	void set_Name (string name)
//	{
//		m_Name = name;
//	}
//	//������
//	void get_Name()
//	{
//		cout << "������" << m_Name << endl;
//	}
//	//������
//	void get_Age()
//	{
//		cout << "���䣺" << m_Age << endl;
//	}
//	//����������Ч��
//	void set_Age(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "�����������󣬸�ֵʧ�ܣ�" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//дż��
//	void set_Idol(string Idol)
//	{
//		m_Idol = Idol;
//	}
//};
//int main5()
//{
//	Person p1;
//	p1.set_Name("����");//д����
//	p1.get_Name();//������
//	p1.get_Age();//������
//	p1.set_Idol("����");//дż��
//
//	system("pause");
//	return 0;
//}