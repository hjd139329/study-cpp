#pragma once//��ֹͷ�ļ��ظ�
#include<iostream>//�������������ͷ�ļ�
using namespace std;//��׼�����ռ�
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define	FILENAME "empFile.txt" 

class WorkerManager
{
public:
	//���캯��
	WorkerManager();
	//չʾ�˵�
	void Show_Menu();
	//�˳�����
	void exitSystem();
	//��¼��������
	int m_EmpNum;
	//���ְ�������ָ��
	Worker ** m_EmpArray;
	//���ְ��
	void add_Emp();
	//���浽�ļ���
	void save();
	//�ļ��Ƿ�Ϊ�յı�־
	bool m_FileIsEmpty;
	//��ȡ��ǰְ�������ĺ���
	int get_EmpNum();
	//���ļ��ж����ݵ��������飬��ʼ������
	void init_Emp();
	//��ʾְ����Ϣ
	void show_Emp();
	//�ж�ְ���Ƿ���ڣ����ڣ����������±꣬�����ڣ�����-1
	int is_Exit(int id);
	//ɾ��ְ������
	void del_Emp();
	//�޸�ְ��
	void mod_Emp();
	//����Ա��
	void find_Emp();
	//��ְ����Ž�������
	void sort_Emp();
	//��ղ���
	void cl_File();
	//��������
	~WorkerManager();

};
