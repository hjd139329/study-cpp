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
	//���캯��
	SpeechManager();
	//չʾ�˵�
	void show_Menu();
	//�˳���������
	void exitSystem();
	//��ʼ����Ա����
	void initSpeech();
	//����ѡ��
	void createSpeaker();

	//��ʼ����
	void startSpeech();
	//��ǩ
	void speechDraw();
	//����-����
	void compareScore();

	//��ʾ�÷�
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;
	//��¼��������
	map<int, vector<string>>m_Record;

	//��ʾ�����¼
	void showRecord();

	//���
	void clearRecord();
	//��������
	~SpeechManager();

	//��Ա����
	vector<int>v1;//�����һ��ѡ�ֱ�ŵ�����
	vector<int>v2;//����ڶ���ѡ�ֱ�ŵ�����
	vector<int>vVictory;//����ʤ��������ѡ�ֱ������
	map<int,Speaker>m_Speaker;//����ѡ�ֱ�ź���Ϣ
	int index;//��ű�������
};