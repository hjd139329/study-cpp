//#include<iostream>
//using namespace std;
//
////�������������
////1.ǰ�õ����ͺ��õ����ڶ���ʱҪ���֣�����ͨ��intռλ����ʵ��
////2.ǰ�õ����������ã����õ�������ֵ
//
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, const MyInteger& myint);
//
//public:
//	MyInteger()
//	{
//		m_A = 0;
//	}
//
//	//ǰ�õ�������
//	//�ڷ��� MyInteger ��ʱ��Ҫ�������ã�ȷ����һ�����ݽ��в���
//	MyInteger& operator++()
//	{
//		m_A++;//�Ƚ���++����
//		return *this;//�ٷ���
//	}
//	//���õ�������
//	//�ڷ��� MyInteger ��ʱ��Ҫ����ֵ
//	//��Ϊ���ص���temp����temp����ʱ�������ٽ���ʱ�����٣�������������
//	MyInteger operator++(int)//int��ʾռλ��������������������ǰ�úͺ���
//	{
//		//�ȼ�¼��ǰֵ
//		MyInteger temp = *this;
//		//++����
//		m_A++;
//		//���ؼ�¼��ֵ
//		return temp;
//	}
//private:
//	int m_A;
//};
//
////�������������
//ostream& operator<<(ostream& cout, const MyInteger& myint)//myint����Ҫ�޸�
//{
//	cout << myint.m_A;
//	return cout;
//}
//
//
////ǰ��++����++�ٷ���
//void test01()
//{
//	MyInteger myint;
//
//	cout << ++myint << endl;
//	cout << myint << endl;
//}
//
//
////����++���ȷ�����++
//void test02()
//{
//	MyInteger myint2;
//	cout << myint2++ << endl;
//	cout << myint2 << endl;
//}
//int main3()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}