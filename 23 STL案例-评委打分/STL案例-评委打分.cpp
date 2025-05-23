#include<iostream>
using namespace std;
#include<deque>
#include<string>
#include<vector>
#include<algorithm>
#include<ctime>

class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;
};

void creatPerson(vector<Person>&v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数放在deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}
		//cout << (*it).m_Name << "打分：" << endl;
		/*for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}*/
		//cout << endl;
		//排序
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();//平均分
		(*it).m_Score = avg;
	}
}

void showScore(const vector<Person>&p)
{
	for (vector<Person>::const_iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " 得分：" << (*it).m_Score << endl;
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//1.创建5个选手
	vector<Person>v;
	creatPerson(v);

	//测试
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "分数：" << (*it).m_Score << endl;
	}*/

	//打分
	setScore(v);

	//显示打分
	showScore(v);
	system("pause");
	return 0;
}
