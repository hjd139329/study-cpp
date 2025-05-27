#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<map>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void creatWorker(vector<Worker>&v)
{
	string nameSeed = "ABCDEFGHIJ";
	
		for (int i = 0; i < 10; i++)
		{
			Worker worker;
			worker.m_Name = "Ա��";
			worker.m_Name += nameSeed[i];
			
			worker.m_Salary = rand() % 10000 + 10000;
			v.push_back(worker);
		}
}
void setGroupWorker(vector<Worker>&v,multimap<int,Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int depId = rand() % 3;//  0  1  2
		m.insert(make_pair(depId, *it));
	}


}
void showWorker(multimap<int,Worker>&m)
{

	//�߻�����
	cout << "�߻����ţ�" << endl;
	int count1 = m.count(CEHUA);
	int index1 = 0;
	multimap<int, Worker>::iterator pos1 = m.find(CEHUA);
	for (; pos1 != m.end() && index1 < count1; pos1++, index1++)
	{
		cout << "������" << pos1->second.m_Name << "  " << "нˮ��" << pos1->second.m_Salary << endl;
	}

	//��������
	cout << "�������ţ�" << endl;
	int count2 = m.count(MEISHU);
	int index2 = 0;
	multimap<int, Worker>::iterator pos2 = m.find(MEISHU);
	for (; pos2 != m.end() && index2 < count2; pos2++, index2++)
	{
		cout << "������" << pos2->second.m_Name << "  " << "нˮ��" << pos2->second.m_Salary << endl;
	}

	//�з�����
	cout << "�з����ţ�" <<endl;
	int count3 = m.count(YANFA);
	int index3 = 0;
	multimap<int, Worker>::iterator pos3 = m.find(MEISHU);
	for (; pos3 != m.end() && index3 < count3; pos3++, index3++)
	{
		cout << "������" << pos3->second.m_Name << "  " << "нˮ��" << pos3->second.m_Salary << endl;
	}


	
}
int main()
{

	//����10��Ա��
	vector<Worker>vWorker;
	
	//����Ա��
	creatWorker(vWorker);
	//����
	for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << it->m_Name << it->m_Salary << endl;
	}
	//��Ա�����飨��ְλ��
	multimap<int, Worker>mWorker;
	setGroupWorker(vWorker,mWorker);
	//չʾԱ��
	showWorker(mWorker);

	system("pause");
	return 0;
}