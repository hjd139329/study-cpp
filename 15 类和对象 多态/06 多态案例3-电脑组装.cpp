#include<iostream>
using namespace std;


//������Ҫ��ɲ���Ϊ CPU(���ڼ���)���Կ�(������ʾ)���ڴ���(���ڴ洢)
// ��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����
// ����Intel���̺�Lenovo���̴���������
// �ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
// ����ʱ��װ��̨��ͬ�ĵ��Խ��й���
// 

//�ȳ�����������ࣨCPU���Կ����ڴ棩
//�ٴ�����ͬ�ĳ��̣����г��̵������Ϊ�������������
//�ٴ��������࣬����������������ԣ�CPU���Կ����ڴ棩
//�����๹��ʱ�����������ָ�루ע�⣬���ܵ��������ָ���ڵ�������ά����
//���Ե����������������Ҫ�ͷ����������ڶ���������

//����Cpu���Կ����ڴ�������
class Cpu
{
public:
	virtual void calculate() = 0;
};
class VideoCard
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void storage() = 0;
};


//IntelCpu��
class IntelCpu :public Cpu
{
public:
	virtual void calculate()
	{
		cout << "IntelCpu����" << endl;
	}
};

//Intel�Կ���
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel�Կ�����" << endl;
	}
};
//Intel�ڴ���
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel�ڴ湤��" << endl;
	}
};


//����Cpu��
class LenovoCpu :public Cpu
{
public:
	virtual void calculate()
	{
		cout << "LenovoCpu����" << endl;
	}
};

//Intel�Կ���
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo�Կ�����" << endl;
	}
};
//Intel�ڴ���
class LenovolMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo�ڴ湤��" << endl;
	}
};


//�������
class Computer
{
public:
	//���캯��
	Computer(Cpu* cpu, VideoCard *vc, Memory *mem)
	{
		cout << "computer����" << endl;
		m_cpu = cpu;
		m_mem = mem;
		m_vc = vc;
	}
	//��������
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	 ~Computer()
	{
		cout << "computer����" << endl;
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	Cpu* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;

};


void test01()
{
	//����һ̨����
	cout << "1����" << endl;
	//intelƷ�Ƶ��������
	Cpu* intelCpu = new IntelCpu;
	VideoCard* intelVc = new IntelVideoCard;
	Memory* intelmem = new IntelMemory;

	Computer* computer1 = new Computer (intelCpu, intelVc, intelmem);
	computer1->work();
	delete computer1;

	cout << "------------------" << endl;
	cout << "2����" << endl;
	//�����ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovolMemory);
	computer2->work();
	delete computer2;

	//����̨
	cout << "------------------" << endl;
	cout << "3����" << endl;
	Computer* computer3 = new Computer(new LenovoCpu, new IntelVideoCard, new LenovolMemory);
	computer3->work();
	delete computer3;
}


int main()
{
	test01();
	system("pause");
	return 0;
}