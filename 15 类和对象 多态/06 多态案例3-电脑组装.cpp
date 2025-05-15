#include<iostream>
using namespace std;


//电脑主要组成部件为 CPU(用于计算)，显卡(用于显示)，内存条(用于存储)
// 将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件
// 例如Intel厂商和Lenovo厂商创建电脑类
// 提供让电脑工作的函数，并且调用每个零件工作的接口
// 测试时组装三台不同的电脑进行工作
// 

//先抽象出三个基类（CPU、显卡、内存）
//再创建不同的厂商，其中厂商的零件作为三个基类的子类
//再创建电脑类，电脑类具有三个属性（CPU、显卡、内存）
//电脑类构造时接受三个零件指针（注意，接受的三个零件指针在电脑类中维护）
//所以电脑类的析构函数需要释放三个开辟在堆区的数据

//抽象Cpu、显卡、内存三个类
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


//IntelCpu类
class IntelCpu :public Cpu
{
public:
	virtual void calculate()
	{
		cout << "IntelCpu工作" << endl;
	}
};

//Intel显卡类
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel显卡工作" << endl;
	}
};
//Intel内存类
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel内存工作" << endl;
	}
};


//联想Cpu类
class LenovoCpu :public Cpu
{
public:
	virtual void calculate()
	{
		cout << "LenovoCpu工作" << endl;
	}
};

//Intel显卡类
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo显卡工作" << endl;
	}
};
//Intel内存类
class LenovolMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo内存工作" << endl;
	}
};


//计算机类
class Computer
{
public:
	//构造函数
	Computer(Cpu* cpu, VideoCard *vc, Memory *mem)
	{
		cout << "computer构造" << endl;
		m_cpu = cpu;
		m_mem = mem;
		m_vc = vc;
	}
	//工作函数
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	 ~Computer()
	{
		cout << "computer析构" << endl;
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
	//创建一台电脑
	cout << "1电脑" << endl;
	//intel品牌的三个零件
	Cpu* intelCpu = new IntelCpu;
	VideoCard* intelVc = new IntelVideoCard;
	Memory* intelmem = new IntelMemory;

	Computer* computer1 = new Computer (intelCpu, intelVc, intelmem);
	computer1->work();
	delete computer1;

	cout << "------------------" << endl;
	cout << "2电脑" << endl;
	//创建第二台电脑
	Computer* computer2 = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovolMemory);
	computer2->work();
	delete computer2;

	//第三台
	cout << "------------------" << endl;
	cout << "3电脑" << endl;
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