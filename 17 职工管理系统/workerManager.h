#pragma once//防止头文件重复
#include<iostream>//包含输入输出流头文件
using namespace std;//标准命名空间
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define	FILENAME "empFile.txt" 

class WorkerManager
{
public:
	//构造函数
	WorkerManager();
	//展示菜单
	void Show_Menu();
	//退出程序
	void exitSystem();
	//记录数据人数
	int m_EmpNum;
	//存放职工数组的指针
	Worker ** m_EmpArray;
	//添加职工
	void add_Emp();
	//保存到文件中
	void save();
	//文件是否为空的标志
	bool m_FileIsEmpty;
	//获取当前职工个数的函数
	int get_EmpNum();
	//从文件中读数据到程序数组，初始化数组
	void init_Emp();
	//显示职工信息
	void show_Emp();
	//判断职工是否存在，存在，返回数组下标，不存在，返回-1
	int is_Exit(int id);
	//删除职工操作
	void del_Emp();
	//修改职工
	void mod_Emp();
	//查找员工
	void find_Emp();
	//对职工编号进行排序
	void sort_Emp();
	//清空操作
	void cl_File();
	//析构函数
	~WorkerManager();

};
