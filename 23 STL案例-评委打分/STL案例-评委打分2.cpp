#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<ctime>
#include<algorithm>

//学生类
class Person
{
public:
	Person(string name,int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	
	string m_Name;
	int m_Score;
};
void createPerson(vector<Person>&v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameseed[i];
		int score = 0;
		Person p(name,score);
		v.push_back(p);
	}
}
//打分
void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//分数范围60-100
			d.push_back(score);
			//cout << score<<"  ";//测试用
		}
		sort(d.begin(), d.end());//排序
		d.pop_back();
		d.pop_front();
		
		//测试
		/*	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			cout << *it << " " << endl;
		}*/

		int sum = 0;
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			sum += *it;
		}
		int avg = sum / d.size();//平均分
		//cout << avg<<"---";//测试用
		it->m_Score = avg;
	}
}

void showScore(const vector<Person>&v)
{
	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_Name << "分数为：" << it->m_Score << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));//随机数种子
	vector<Person>v;
	createPerson(v);//创建5名选手

	//测试
	/*for (vector<Person>::iterator it = v.begin();it!=v.end();it++)
	{
		cout << it->m_Name << "分数为：" << it->m_Score << "  ";
		cout << endl;
	}*/

	//给5名选手赋分
	setScore(v);

	//打印选手成绩
	showScore(v);

	system("pause");
	return 0;
}