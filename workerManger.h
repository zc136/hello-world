#pragma once//��ֹͷ�ļ��ظ�
#include <iostream>//������������ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include "worker.h"
#include"boss.h"
#include"empioyee.h"
#include"manger.h"
#include"workerManger.h"
#include<fstream>

#define FILENAME "empFile.txt"
class WorkerManger
{
public:
	//���캯��
	WorkerManger();
	void Show_Menu();//չʾ�˵�
	void exitSystem();//�˳�
	void Add_emp();
	void save();

	int get_EmpNum();
	void init_Emp();

	void Show_Emp();
	//ɾ��ְ��
	void Del_Emp();
	//�ж�ְ���Ƿ����
	int IsExist(int id);

	//�޸�ְ����Ϣ
	void Mod_Emp();

	//��¼ְ��������
	int m_EmpNum;
	Worker** m_EmpArray;//ְ������ָ��
	void Add_Emp();
	//
	//
	//��������
	~WorkerManger();
	//����
	void Find_Emp();

	//����
	void Sort_Emp();
	//���
	void Clean_File();

	bool m_FileIsEmpty;
};
 
