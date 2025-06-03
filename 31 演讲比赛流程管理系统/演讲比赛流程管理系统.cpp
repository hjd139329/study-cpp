#include<iostream>
using namespace std;
#include"speechManager.h"
#include<string>



int main()
{
	//随机数种子，用来赋分
	srand((unsigned int)time(NULL));
	SpeechManager sm;
	int choice = 0;


	//测试12名选手
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "编号：" << (*it).first << (*it).second.m_Name << "  分数：" << (*it).second.m_Score[0] << endl;
	}*/

	while (true)
	{
		sm.show_Menu();
		cout << "请输入您要执行的操作" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "开始演讲比赛" << endl;
			sm.startSpeech();
			break;
		case 2:
			cout << "查看往届记录" << endl;
			sm.showRecord();
			//sm.loadRecord();
			break;

		case 3:
			cout << "清空比赛记录" << endl;
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