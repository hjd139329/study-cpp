#pragma once
#include<iostream>
using namespace std;
#include<string>


class Worker
{
public:
	int m_Id;//ְ�����
	string m_Name;//����
	int m_DeptId;//���ű��
	virtual void showInfo() = 0;//��ʾԱ����Ϣ
	virtual string getDeptName() = 0;//��ȡ��λ����

};