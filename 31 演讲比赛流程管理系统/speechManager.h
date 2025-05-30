#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"
#include<string>
#include<algorithm>
#include<deque>

class SpeechManager
{
public:
	//构造函数
	SpeechManager();
	//展示菜单
	void show_Menu();
	//退出比赛程序
	void exitSystem();
	//初始化成员属性
	void initSpeech();
	//创建选手
	void createSpeaker();

	//开始比赛
	void startSpeech();
	//抽签
	void speechDraw();
	//赋分-比赛
	void compareScore();
	//析构函数
	~SpeechManager();

	//成员属性
	vector<int>v1;//保存第一轮选手编号的容器
	vector<int>v2;//保存第二轮选手编号的容器
	vector<int>vVictory;//保存胜出的三名选手编号容器
	map<int,Speaker>m_Speaker;//保存选手编号和姓名
	int index;//存放比赛轮数
};