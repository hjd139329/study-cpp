#include"speechManager.h"




//构造函数
SpeechManager::SpeechManager()
{
	//初始化容器和属性	
	this->initSpeech();
	//创建12个成员
	this->createSpeaker();
}
//展示菜单
void SpeechManager::show_Menu()
{
	cout << "******************************" << endl;
	cout << "*******欢迎参加演讲比赛*******" << endl;
	cout << "********1.开始演讲比赛********" << endl;
	cout << "********2.查看往届记录********" << endl;
	cout << "********3.清空比赛记录********" << endl;
	cout << "********0.退出比赛程序********" << endl;
	cout << "******************************" << endl;

}
//退出比赛程序
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}
//初始化成员属性
void SpeechManager::initSpeech()
{
	//将容器都置空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	this->index = 1;
}
//创建选手
void SpeechManager::createSpeaker()
{

	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size() ; i++)
	{
		Speaker sp;
		string name = "选手" ;
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

//开始比赛
void SpeechManager::startSpeech()
{
	//第一轮比赛
	//1.抽签
	this->speechDraw();
	//2.比赛
	this->compareScore();
	//3.显示晋级结果
	this->showScore();
	//第二轮比赛
	this->index++;
	//1.抽签
	this->speechDraw();
	//2.比赛
	this->compareScore();
	//3.显示最终结果
	this->showScore();
	//4.保存到文件中
	this->saveRecord();

	cout << "本届比赛结束！" << endl;
	system("pause");
	system("cls");

}

//抽签
void SpeechManager::speechDraw()
{
	if (this->index == 1)
	{
		//打乱顺序
		random_shuffle(this->v1.begin(), this->v1.end());
		cout << "第一轮比赛顺序" << endl;
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << "  " ;
		}
		cout << endl;
	}
	else
	{
		random_shuffle(this->v2.begin(), this->v2.end());
		cout << "第二轮比赛顺序" << endl;
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

//赋分-比赛
void SpeechManager::compareScore()
{
	vector<int>v_Src;//比赛选手容器
	if (index == 1)
	{
		cout << "第" << this->index << "轮正式开始" << endl;
		v_Src = v1;
	}
	else
	{
		cout << "第" << this->index << "轮正式开始" << endl;
		v_Src = v2;
	}

	//临时容器，存放比赛时分组的数据
	multimap<double, int,greater<double>>groupScore;
	int num = 0;//记录人数
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		deque<double>d;
		//十个评委打分
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << "  ";
			d.push_back(score);
		}
		//cout << endl;
		//排序
		sort(d.begin(), d.end(),greater<double>());
		//去掉最高最低分
		d.pop_back();
		d.pop_front();
		double sum = accumulate(d.begin(), d.end(),0.0f);//0是默认，在相加时不额外添加
		double avg = sum / (double)d.size();
		//打印平均分
		//cout << "编号：" << *it << "  姓名：" << this->m_Speaker[*it].m_Name << "  平均分：" << avg << endl;
		//把第一轮每人平均分放入容器中
		this->m_Speaker[*it].m_Score[this->index - 1] = avg;
	
		//将打分数据放入临时容器中
		groupScore.insert(make_pair(avg, *it));
		if (num % 6 == 0)//此时正好到第6个人或者第12个人
		{
			cout << "第" << num / 6 << "组名次如下：" << endl;
			for (multimap<double, int,greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "编号：" << (*it).second << "  姓名：" << this->m_Speaker[it->second].m_Name
					<< "  分数：" << this->m_Speaker[it->second].m_Score[this->index - 1] << endl;

			}

			//取走每组的前三名
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
	cout << "第" << this->index << "轮比赛完毕" << endl;
	system("pause");
}

//显示得分
void SpeechManager::showScore()
{
	cout << "第" << this->index << "轮晋级信息如下：" << endl;
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
		cout << "编号：" << *it << "  姓名：" << this->m_Speaker[*it].m_Name 
			<< "  分数：" << this->m_Speaker[*it].m_Score[this->index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}

//保存记录
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	cout << "记录保存完成" << endl;
}
//析构函数
SpeechManager::~SpeechManager()
{

}

