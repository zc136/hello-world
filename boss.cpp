#include"boss.h"

Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_Deptid = did;
}

void Boss::showInfo()
{
	cout << "ְ����� " << this->m_id
		<< "\tְ�������� " << this->m_name
		<< "\t��λ��" << this->getDepName()
		<< "\t��λְ����Ӫ��˾" << endl;
}
string Boss::getDepName()
{
	return  string("�ϰ�");
}