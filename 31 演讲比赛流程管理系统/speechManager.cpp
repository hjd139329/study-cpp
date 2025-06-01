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
	this->compareScore();
	//3.��ʾ�������
	this->showScore();
	//�ڶ��ֱ���
	this->index++;
	//1.��ǩ
	this->speechDraw();
	//2.����
	this->compareScore();
	//3.��ʾ���ս��
	this->showScore();
	//4.���浽�ļ���
	this->saveRecord();

	cout << "�������������" << endl;
	system("pause");
	system("cls");

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
	vector<int>v_Src;//����ѡ������
	if (index == 1)
	{
		cout << "��" << this->index << "����ʽ��ʼ" << endl;
		v_Src = v1;
	}
	else
	{
		cout << "��" << this->index << "����ʽ��ʼ" << endl;
		v_Src = v2;
	}

	//��ʱ��������ű���ʱ���������
	multimap<double, int,greater<double>>groupScore;
	int num = 0;//��¼����
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		deque<double>d;
		//ʮ����ί���
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << "  ";
			d.push_back(score);
		}
		//cout << endl;
		//����
		sort(d.begin(), d.end(),greater<double>());
		//ȥ�������ͷ�
		d.pop_back();
		d.pop_front();
		double sum = accumulate(d.begin(), d.end(),0.0f);//0��Ĭ�ϣ������ʱ���������
		double avg = sum / (double)d.size();
		//��ӡƽ����
		//cout << "��ţ�" << *it << "  ������" << this->m_Speaker[*it].m_Name << "  ƽ���֣�" << avg << endl;
		//�ѵ�һ��ÿ��ƽ���ַ���������
		this->m_Speaker[*it].m_Score[this->index - 1] = avg;
	
		//��������ݷ�����ʱ������
		groupScore.insert(make_pair(avg, *it));
		if (num % 6 == 0)//��ʱ���õ���6���˻��ߵ�12����
		{
			cout << "��" << num / 6 << "���������£�" << endl;
			for (multimap<double, int,greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "��ţ�" << (*it).second << "  ������" << this->m_Speaker[it->second].m_Name
					<< "  ������" << this->m_Speaker[it->second].m_Score[this->index - 1] << endl;

			}

			//ȡ��ÿ���ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end()&&count<3; it++)
			{
				count++;
				if (this->index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}
			groupScore.clear();
			cout << endl;
		}
	}
	cout << "��" << this->index << "�ֱ������" << endl;
	system("pause");
}

//��ʾ�÷�
void SpeechManager::showScore()
{
	cout << "��" << this->index << "�ֽ�����Ϣ���£�" << endl;
	vector<int>v;
	if (this->index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "��ţ�" << *it << "  ������" << this->m_Speaker[*it].m_Name 
			<< "  ������" << this->m_Speaker[*it].m_Score[this->index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}

//�����¼
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	cout << "��¼�������" << endl;
}
//��������
SpeechManager::~SpeechManager()
{

}

