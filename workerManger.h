#pragma once//防止头文件重复
#include <iostream>//包含输入输出文件
using namespace std;//使用标准命名空间
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
	//构造函数
	WorkerManger();
	void Show_Menu();//展示菜单
	void exitSystem();//退出
	void Add_emp();
	void save();

	int get_EmpNum();
	void init_Emp();

	void Show_Emp();
	//删除职工
	void Del_Emp();
	//判断职工是否存在
	int IsExist(int id);

	//修改职工信息
	void Mod_Emp();

	//记录职工的人数
	int m_EmpNum;
	Worker** m_EmpArray;//职工数组指针
	void Add_Emp();
	//
	//
	//析构函数
	~WorkerManger();
	//查找
	void Find_Emp();

	//排序
	void Sort_Emp();
	//清空
	void Clean_File();

	bool m_FileIsEmpty;
};
 
