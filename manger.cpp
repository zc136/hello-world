#include"manger.h"

 Manager:: Manager(int id, string name, int did)
{
	 this->m_id = id;
	 this->m_name = name;
	 this->m_Deptid = did;
}

 void Manager:: showInfo()
{
	 cout << "ְ����� " << this->m_id
		 << "\tְ�������� " << this->m_name
		 << "\t��λ��" << this->getDepName()
		 << "\t��λְ������ϰ彻��������" << endl;
}
string Manager:: getDepName()
{
	return  string ("����");
}