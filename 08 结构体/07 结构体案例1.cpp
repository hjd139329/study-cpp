//#include<iostream>
//using namespace std;
//#include <string>
//#include<ctime>
//
////ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ���������£�
//// ���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա��
//// ѧ���ĳ�Ա�����������Է�����
////����������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ�����մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
//
//struct Student
//{
//	string name;
//	int score = 0;
//};
//struct Teacher
//{
//	string name;
//	Student stuArray[5];
//};
//
//
//
////����ʦ��ѧ����ֵ����
//void allocateSpace(struct Teacher s[], int len)
//{
//
//
//	string nameseed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		s[i].name = "��ʦ_";
//		s[i].name += nameseed[i];
//		
//		//��ÿ����ʦ����ѧ����ֵ
//		for (int j = 0; j < 5; j++)
//		{
//			s[i].stuArray[j].name = "ѧ��_";
//			s[i].stuArray[j].name += nameseed[j];
//			int random = rand() % 61 + 40;
//			s[i].stuArray[j].score = random;
//		}
//	}
//}
//
//
//
////������ӡ��ʦ������ѧ��������
//void PrintData(Teacher s[])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "��ʦ��������" << s[i].name << endl;
//		cout << s[i].name << "��ѧ�����ݣ�" << endl;
//		for(int j = 0;j<5;j++)
//		{
//			cout << s[i].stuArray[j].name << "�ķ���: " << s[i].stuArray[j].score << endl;
//		}
//	}
//}
//
//
//int main()
//{
//	//��������3����ʦ������
//	Teacher teaArray[3];
//	int len = sizeof(teaArray) / sizeof(teaArray[0]);
//	//�������ֶ���ֵ
//	////��ʦ1
//	//teaArray[0].name = "��ʦ1";
//	//teaArray[0].stuArray[0] = { "ѧ��1��", 1 };
//	//teaArray[0].stuArray[1] = { "ѧ��2��", 2 };
//	//teaArray[0].stuArray[2] = { "ѧ��3��", 3 };
//	//teaArray[0].stuArray[3] = { "ѧ��4��", 4 };
//	//teaArray[0].stuArray[4] = { "ѧ��5��", 5 };
//	////��ʦ2
//	//teaArray[1].name = "��ʦ2";
//	//teaArray[1].stuArray[0] = { "ѧ��6��", 6 };
//	//teaArray[1].stuArray[1] = { "ѧ��7��", 7 };
//	//teaArray[1].stuArray[2] = { "ѧ��8��", 8 };
//	//teaArray[1].stuArray[3] = { "ѧ��9��", 9 };
//	//teaArray[1].stuArray[4] = { "ѧ��10��", 10 };
//	////��ʦ3
//	//teaArray[2].name = "��ʦ3";
//	//teaArray[2].stuArray[0] = { "ѧ��11��", 11 };
//	//teaArray[2].stuArray[1] = { "ѧ��12��", 12};
//	//teaArray[2].stuArray[2] = { "ѧ��13��", 13};
//	//teaArray[2].stuArray[3] = { "ѧ��14��", 14};
//	//teaArray[2].stuArray[4] = { "ѧ��15��", 15};
//
//
//	//ʹ�ú�����ֵ
//	//���������
//	srand((unsigned int)time(NULL));
//	//srand((unsigned int)time(NULL));
//	allocateSpace(teaArray, len);
//	PrintData(teaArray);
//
//	system("pause");
//	return 0;
//}
//
