#include"boss.h"

Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_Deptid = did;
}

void Boss::showInfo()
{
	cout << "职工编号 " << this->m_id
		<< "\t职工姓名： " << this->m_name
		<< "\t岗位：" << this->getDepName()
		<< "\t岗位职责：运营公司" << endl;
}
string Boss::getDepName()
{
	return  string("老板");
}