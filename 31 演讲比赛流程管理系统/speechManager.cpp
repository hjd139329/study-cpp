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

	//3.显示晋级结果

	//第二轮比赛
	//1.抽签

	//2.比赛

	//3.显示最终结果

	//4.保存到文件中

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
	if (index == 1)
	{
		cout << "正在进行第一轮比赛" << endl;

		deque<double>d;
		rand() %300+700/10;
		for (int i = 0; i < 12; i++)
		{

		}
	}
}
//析构函数
SpeechManager::~SpeechManager()
{

}

