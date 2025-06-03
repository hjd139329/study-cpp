#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"
#include<string>
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<fstream>

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

	//显示得分
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();

	//判断文件是否为空
	bool fileIsEmpty;
	//记录往届数据
	map<int, vector<string>>m_Record;

	//显示往届记录
	void showRecord();

	//清空
	void clearRecord();
	//析构函数
	~SpeechManager();

	//成员属性
	vector<int>v1;//保存第一轮选手编号的容器
	vector<int>v2;//保存第二轮选手编号的容器
	vector<int>vVictory;//保存胜出的三名选手编号容器
	map<int,Speaker>m_Speaker;//保存选手编号和信息
	int index;//存放比赛轮数
};