#include<iostream>
using namespace std;
#include"speechManager.h"
#include<string>



int main()
{
	//��������ӣ���������
	srand((unsigned int)time(NULL));
	SpeechManager sm;
	int choice = 0;


	//����12��ѡ��
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "��ţ�" << (*it).first << (*it).second.m_Name << "  ������" << (*it).second.m_Score[0] << endl;
	}*/

	while (true)
	{
		sm.show_Menu();
		cout << "��������Ҫִ�еĲ���" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "��ʼ�ݽ�����" << endl;
			sm.startSpeech();
			break;
		case 2:
			cout << "�鿴�����¼" << endl;
			sm.showRecord();
			//sm.loadRecord();
			break;

		case 3:
			cout << "��ձ�����¼" << endl;
			sm.clearRecord();
			break;

		case 0:
			sm.exitSystem();
			break;

		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}