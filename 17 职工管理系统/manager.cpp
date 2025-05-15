#include"manager.h"

Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示员工信息

void Manager::showInfo()
{
	cout << "编号：" << this->m_Id
		<< "\t姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t完成总裁交给的任务" << endl;

}

//获取岗位名称
string Manager::getDeptName()
{
	return string("经理");
}