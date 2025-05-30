#include"speechManager.h"




//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ������������	
	this->initSpeech();
	//����12����Ա
	this->createSpeaker();
}
//չʾ�˵�
void SpeechManager::show_Menu()
{
	cout << "******************************" << endl;
	cout << "*******��ӭ�μ��ݽ�����*******" << endl;
	cout << "********1.��ʼ�ݽ�����********" << endl;
	cout << "********2.�鿴�����¼********" << endl;
	cout << "********3.��ձ�����¼********" << endl;
	cout << "********0.�˳���������********" << endl;
	cout << "******************************" << endl;

}
//�˳���������
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}
//��ʼ����Ա����
void SpeechManager::initSpeech()
{
	//���������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	this->index = 1;
}
//����ѡ��
void SpeechManager::createSpeaker()
{

	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size() ; i++)
	{
		Speaker sp;
		string name = "ѡ��" ;
		name += nameSeed[i];
		sp.m_Name = name;
		for (int i = 0; i < 2; i++)
		{
			sp.m_Score[i] = 0;
		}
		this->v1.push_back(i + 1001);
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

//��ʼ����
void SpeechManager::startSpeech()
{
	//��һ�ֱ���
	//1.��ǩ
	this->speechDraw();
	//2.����

	//3.��ʾ�������

	//�ڶ��ֱ���
	//1.��ǩ

	//2.����

	//3.��ʾ���ս��

	//4.���浽�ļ���

}

//��ǩ
void SpeechManager::speechDraw()
{
	if (this->index == 1)
	{
		//����˳��
		random_shuffle(this->v1.begin(), this->v1.end());
		cout << "��һ�ֱ���˳��" << endl;
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << "  " ;
		}
		cout << endl;
	}
	else
	{
		random_shuffle(this->v2.begin(), this->v2.end());
		cout << "�ڶ��ֱ���˳��" << endl;
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << "  " ;
		}
		cout << endl;
	}
	cout << "---------------" << endl;
	system("pause");
	cout << endl;
}

//����-����
void SpeechManager::compareScore()
{
	if (index == 1)
	{
		cout << "���ڽ��е�һ�ֱ���" << endl;

		deque<double>d;
		rand() %300+700/10;
		for (int i = 0; i < 12; i++)
		{

		}
	}
}
//��������
SpeechManager::~SpeechManager()
{

}

