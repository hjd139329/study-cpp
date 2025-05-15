#include"employee.h"


Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}
//显示员工信息
void Employee::showInfo()
{
	cout << "编号：" << this->m_Id 
		<< "\t姓名：" << this->m_Name 
		<<"\t岗位：" << this->getDeptName() 
		<<"\t完成经理交给的任务" << endl;
}
//获取岗位名称
string Employee::Employee::getDeptName()
{
	return string("员工");
 }
