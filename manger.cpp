#include"manger.h"

 Manager:: Manager(int id, string name, int did)
{
	 this->m_id = id;
	 this->m_name = name;
	 this->m_Deptid = did;
}

 void Manager:: showInfo()
{
	 cout << "职工编号 " << this->m_id
		 << "\t职工姓名： " << this->m_name
		 << "\t岗位：" << this->getDepName()
		 << "\t岗位职责：完成老板交给得任务" << endl;
}
string Manager:: getDepName()
{
	return  string ("经理");
}