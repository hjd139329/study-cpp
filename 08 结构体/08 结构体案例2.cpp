#include<iostream>
using namespace std;
#include<string>


//�շ���������
//�ṹ������ĸ��д�����浥������ĸ��д
//��������ĸСд�����浥������ĸ��д


//���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;
//�����ṹ�����飬�����д��5��Ӣ�ۡ�
//���ͨ��ð��������㷨���������е�Ӣ�۰������������������
//���մ�ӡ�����Ľ����

//Ӣ�۵Ľṹ��
struct Hero
{
	string name;
	int age = 0;
	int sex = 0;//���secΪ1����Ϊ�У�Ϊ0����ΪŮ
};


//��hero��ֵ
void allocateHero(Hero h[], int len)
{
	string nameseed = "ABCDEF";
	for (int i = 0; i < len; i++)
	{
		//��������
		h[i].name = "hero_";
		h[i].name += nameseed[i];
		//��������
		h[i].age = rand() % 20 + 30;//���䶼��30-49֮��
		//ȷ������Ա�
		h[i].sex = rand() % 2;
	}

}

//ð�������㷨��ͨ��hero�����������������
void bubbleSort(Hero h[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i ;j++)
		{
			if (h[j].age > h[j + 1].age)
			{
				//����hero�����е�������Ϣ
				//����ֱ�ӽ�������ͬ�ֱ𽻻�������������Ա�
				//ֱ�ӽ���
				struct Hero hero_temp = h[j];
				h[j] = h[j + 1];
				h[j + 1] = hero_temp;

				//�ֱ𽻻����鷳����ֱ�ӽ���
				// //1.��������
				//string name_temp = h[j].name;
				//h[j].name = h[j + 1].name;
				//h[j + 1].name = name_temp;
				////2.��������
				//int age_temp = h[j].age;
				//h[j].age = h[j + 1].age;
				//h[j + 1].age = age_temp;
				////�����Ա�
				//int sex_temp = h[j].sex;
				//h[j].sex = h[j + 1].sex;
				//h[j + 1].sex = sex_temp;
			}
		}
	}
}

//��ӡ�㷨
void printHero(Hero p[], int len)
{
	for (int i = 0; i < len; i++)
	{
		
		cout << p[i].name << "--" << "���䣺" << p[i].age;
		if (p[i].sex == 1)
		{
			cout << "--" << "�Ա���" << endl;
		}
		else
			cout << "--" << "�Ա�Ů" << endl;
		cout << endl;
	}
}

int main()
{
	//��������ӣ���������������Ա����
	srand((unsigned int)time(NULL));

	//Ӣ�۽ṹ�����飬����5��Ӣ��
	struct Hero heroArray[5];
	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	//������Ӣ�۽ṹ��������и�ֵ
	allocateHero(heroArray, len);

	//ð���㷨������������
	bubbleSort(heroArray, len);


	//��ӡ�����Ľ��
	printHero(heroArray, len);
	system("pause");
	return 0;

}