#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<ctime>
#include<algorithm>

//ѧ����
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
		string name = "ѡ��";
		name += nameseed[i];
		int score = 0;
		Person p(name,score);
		v.push_back(p);
	}
}
//���
void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//������Χ60-100
			d.push_back(score);
			//cout << score<<"  ";//������
		}
		sort(d.begin(), d.end());//����
		d.pop_back();
		d.pop_front();
		
		//����
		/*	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			cout << *it << " " << endl;
		}*/

		int sum = 0;
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			sum += *it;
		}
		int avg = sum / d.size();//ƽ����
		//cout << avg<<"---";//������
		it->m_Score = avg;
	}
}

void showScore(const vector<Person>&v)
{
	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_Name << "����Ϊ��" << it->m_Score << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));//���������
	vector<Person>v;
	createPerson(v);//����5��ѡ��

	//����
	/*for (vector<Person>::iterator it = v.begin();it!=v.end();it++)
	{
		cout << it->m_Name << "����Ϊ��" << it->m_Score << "  ";
		cout << endl;
	}*/

	//��5��ѡ�ָ���
	setScore(v);

	//��ӡѡ�ֳɼ�
	showScore(v);

	system("pause");
	return 0;
}