#include"empioyee.h"


Employee::Employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_Deptid = did;
}
void Employee::showTnfo()
{
	cout << "职工编号 " << this->m_id
		<< "\t职工姓名： " << this->m_name
		<< "\t岗位：" << this->getDeptname()
		<<"\t岗位职责：完成经理交给得任务"<< endl;
}

string Employee::getDeptname()
{
	return string ("员工");
}

