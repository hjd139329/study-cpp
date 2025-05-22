#pragma once
using namespace std;

template<class T>
class MyArray
{
public:
	//有参构造
	MyArray(int capacity)
	{
		//cout << "有参构造的调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
		//cout << "拷贝构造的调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		
		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		//加入原来数组中有数据，都拷贝过来
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];	
		}
	}

	//operator=重载，防止浅拷贝
	MyArray& operator=(const MyArray &arr)
	{
		//cout << "operator=的调用" << endl;

		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//尾插法
	void Push_Back(const T &val)
	{
		if (this->m_Size == this->m_Capacity)
		{
			cout << "满" << endl;
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}
	//尾删法
	void Pop_Back()
	{
		if (this->m_Size == 0)
		{
			cout << "没有元素可以删除" << endl;
			return;
		}
		//逻辑删除
		this->m_Size--;
	}

	//使用下标访问元素
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//返回数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}
	//返回数组大小
	int getSize()
	{
		return this->m_Size;
	}
	//析构函数
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "析构的调用" << endl;
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}


private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};