#pragma once
#include<iostream>
using namespace std;
#include<string>


class Worker
{
public:
	int m_Id;//职工编号
	string m_Name;//姓名
	int m_DeptId;//部门编号
	virtual void showInfo() = 0;//显示员工信息
	virtual string getDeptName() = 0;//获取岗位名称

};